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
        stars:
        cout<< "Stars(out of 5): ";
        cin>>stars;
        if(stars>5){
            cout<<"Stars should be less than 5\n";
            goto stars;
        }
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
            if(user.users[i]->email == emailLogin){
                if(user.users[i]->password == passwordLogin){
                    setName(user.users[i]->accountType);
                    setName(user.users[i]->name);
                    setEmail(user.users[i]->email);
                    setPassword(user.users[i]->password);
                    setAge(user.users[i]->age);
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

        for(int i =0;i<reviewList.reviewList.size() ;i++){
            if(reviewList.reviewList[i].first == this->email){
                this->reviews = reviewList.reviewList[i].second;
            }
        }

    }

    void getReviews(){
        for(int i =0;i<reviews.size() ;i++){
            cout<< "Title: "<<reviews[i].getTitle()<<endl;
            cout<< "Review: "<<reviews[i].getReview()<<endl;
            cout<< "Stars: "<<reviews[i].getStars()<<endl;
        }
    }

    void updateReview(){
        string title;
        string review;
        int stars;
        cout<< "Title: ";
        cin>>title;
        cout<< "Review: ";
        cin>>review;
        stars:
        cout<< "Stars(out of 5): ";
        cin>>stars;
        if(stars>5){
            cout<<"Stars should be less than 5\n";
            goto stars;
        }
        for(int i =0;i<reviews.size() ;i++){
            if(reviews[i].getTitle() == title){
                reviews[i].setTitle(title);
                reviews[i].setReview(review);
                reviews[i].setStars(stars);
            }
        }
    }

    void deleteReview(){
        string title;
        cout<< "Title: ";
        cin>>title;
        for(int i =0;i<reviews.size() ;i++){
            if(reviews[i].getTitle() == title){
                reviews.erase(reviews.begin() + i);
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