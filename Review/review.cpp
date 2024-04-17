// #include<iostream>
// using namespace std;

class Review{
    string title;
    string review;
    int stars;
    Product product;
    
    public:
    Review(string title, string review, int stars){
        this->title = title;
        this->review = review;
        this->stars = stars;
    }
    void setTitle(string title){
        this->title = title;
    }
    void setReview(string review){
        this->review = review;
    }
    void setStars(int stars){
        this->stars = stars;
    }
    string getTitle(){
        return title;
    }
    string getReview(){
        return review;
    }
    int getStars(){
        return stars;
    }
};