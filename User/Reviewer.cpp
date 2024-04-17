#include "./user.cpp"
#include "../Review/review.cpp"
#include <vector>

class Reviewer: public User{
    vector<Review> reviews;
    ReviewerList reviewList;
    int points;
    public:
    void addReview(){
        string title;
        string review;
        int stars;
        cout<< "Title: ";
        cin>>title;
        cout<< "Review: ";
        cin>>review;
        cout<< "Stars: ";
        cin>>stars;
        Review reviewObj = new Review(title, review, stars);
        reviews.push_back(reviewObj);
        points++;
        reviewList.addReviewer(this->getEmail() ,reviews);
    }

    void login(){
        string emailLogin;
        string passwordLogin;
        cout << "Email: ";
        cin>>emailLogin;
        cout << "Password: ";
        cin>>passwordLogin;

        for(int i =0;i<user.users.size() ;i++){
            if(user.users[i] == emailLogin){
                if(user.users[i] == passwordLogin){
                    this->accountType = user.users[i]->accountType;
                    this->age = user.users[i]->age;
                    this->email = user.users[i]->email;
                    this->id = user.users[i]->id;
                    this->name = user.users[i]->name;
                    this->password = user.users[i]->password;
                    this->reviews = reviewList.reviewList[i].second;
                    cout<<"Logged IN!";
                }
                else{
                    cout<< "Wrong password\n";
                }
            }
            else{
                cout<< "User not found\n";
            }
        }

    }

    void logout(){
        this->reviews.clear();
    }
    int getPoints(){
        return points;
    }
};


class ReviewerList{
    public:
    vector<pair<string , vector<Review>> reviewList;
    void addReviewer(string name  , vector<Review> reviews){
        reviewList.push_back(make_pair(email , ,reviews));
    }
};