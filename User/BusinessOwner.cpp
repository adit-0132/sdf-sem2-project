#include <vector>
#include "../Product/Product.cpp"
#include "../Review/review.cpp"
#include "./user.cpp"

class BusinessOwner: public User{
    vector<Review> reviewsBought; 

    public:
    void buyReviews(ReviewList reviewList){
        cout>> "Enter name of the product for which you want reviews: ";
        int name;
        cin >> name;
        bool found = false;
        for(int i= 0;i<reviewList.size();i++){
            if(reviewList[i].second.product.name == name){
                cout<< "Title: "<<reviewList[i].second.title<<"\n";
                cout<< "Review: "<<reviewList[i].second.review<< endl;
                cout<< "Stars: "<<reviewList[i].second.stars<<endl;
                found = true;
            }
        }
        if(found){
            cout<< "Here are all the reviews: ";
            cout<< "Do you want to buy these reviews?\n1. Yes\n2. No\n";
            int choice;
            cout<< "Enter your choice: ";
            cin>>choice;
            if(choice == 1){
                cout<< "Enter you payment method"<< endl;
                cout<< "1. Credit Card\n2. Debit Card\n3. UPI\n4. Net Banking\n";
                payments:
                int paymentMethod;
                cout<< "Enter your choice: ";
                cin>>paymentMethod;
                if(paymentMethod == 1 || paymentMethod == 2){
                    cout<< "Enter your card details\n";
                    cout<< "Card Number: ";
                    int cardNumber;
                    cin>>cardNumber;
                    cout<< "Expiry Date: ";
                    string expiryDate;
                    cin>>expiryDate;
                    cout<< "CVV: ";
                    int cvv;
                    cin>>cvv;
                }
                else if(paymentMethod == 3){
                    cout<< "Enter your UPI id: ";
                    string upiId;
                    cin>>upiId;
                }
                else if(paymentMethod == 4){
                    cout<< "Enter your net banking details\n";
                    cout<< "Account Number: ";
                    int accountNumber;
                    cin>>accountNumber;
                    cout<< "Password: ";
                    string password;
                    cin>>password;
                }
                else{
                    cout<< "Invalid choice\n";
                    cout<< "Please try again\n";
                    goto payments;
                }
                for(int i= 0;i<reviewList.size();i++){
                    reviewsBought.push_back(reviewList[i].second);
                }
                cout<< "Reviews bought successfully\n";
            }
            else{
                cout<< "Reviews not bought\n";
            }
        }
        else{
            cout<< "No reviews available for this product\n";
        }
        
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

    }


    void getReviews(){
        cout<< "Reviews bought: \n";
        for(int i= 0;i<reviewsBought.size();i++){
            cout<< "Title: "<<reviewsBought[i].title<<"\n";
            cout<< "Review: "<<reviewsBought[i].review<< endl;
            cout<< "Stars: "<<reviewsBought[i].stars<<endl;
        }
    }
};