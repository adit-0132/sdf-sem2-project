#include "./user.cpp"
#include "../Review/review.cpp"
#include <vector>
#include <cstdlib>
#include "./Review/rewards.cpp"
#include <ctime>
#include "../Product/Product.cpp"
#include "./user.cpp

class Reviewer: public User{
    vector<Review> reviews;
    int points;
    vector<Rewards> rewards;
    public:
    vector<Review> getReviewsVector(){
        return reviews;
    }
    vector<Rewards> getRewardsVector(){
        return rewards;
    }

    //product enter kravoo kiska review de rhe hai
    void addReview(){
        int name;
        int price;
        int id;
        cout<< "Enter name of the product: ";
        cin>> name;
        cout<< "Enter price of the product: ";  
        cin >> price;
        int id = time(0);
        Product product = new Product(id , name , price);
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
        Review reviewObj = new Review(title, review, stars , product);
        reviews.push_back(reviewObj);
        points++;
    }

    void login(ReviewList reviewList, userList user){
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

        for(int i =0;i<rewardList.rewardList.size() ;i++){
            if(rewardList.rewardList[i].first == this->email){
                this->rewards = rewardList.rewardList[i].second;
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

    void setPoints(int points){
        this->points = points; 
    }
    void redeemRewards(int choice){
        if(points<20){
            "No reward available\n";
        }
        if(choice == 1){
            cout<< "10 percent discount coupon redeemed\n";
            setPoints(points - 20);
        }
        else if(choice == 2){
            cout<< "20 percent discount coupon redeemed\n";
            setPoints(points - 30);
        }
        else if(choice == 3){
            cout<< "Movie tickets redeemed\n";
            setPoints(points - 40);
        }
        else{
            cout<< "100Rs cashback redeemed\n";
            setPoints(points - 50);
        }
        
        int id = time(0);
        rewards.push_back(Rewards(getEmail() , id));
    }

    void getRewards(){
            if(points < 20){
                cout<< "No rewards available\n";
            }
            if(points == 20){
                cout<< "10 percent discount coupon\n";
            }
            if(points <= 30){
                cout<< "20 percent discount coupon\n";
            } 
            if(points <= 40){
                cout<<"Movie tickets\n";
            }
            if(points <= 50){
                cout<< "100Rs cashback\n";
            }

    }

};


class ReviewerList{
    public:
    vector<pair<string , vector<Review>> reviewList;
    void addReviewer(string name  , vector<Review> reviews){
        reviewList.push_back(make_pair(email , ,reviews));
    }
};