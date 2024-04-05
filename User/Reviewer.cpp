#include "./user.cpp"
#include "../Review/review.cpp"
#include <vector>

class Reviewer: public User{
    vector<Review> reviews;
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
    }
    int getPoints(){
        return points;
    }
};
