#include <cstdlib>
#include <ctime>
#include<vector>

class User{
    string name;
    int id;
    string email;
    string password;   
    int age;
    string accountType;
    string otp;
    userList user;
    public:
    void setName(string name){
        this->name = name;
    }
    void setId(int id){
        this->id = id;
    }
    void setEmail(string email){
        this->email = email;
    }
    void setPassword(string password){
        this->password = password;
    }
    void setAge(int age){
        this->age = age;
    }
    void singup(){
        cout << "Name: ";
        cin>>name;
        cout << "Id: ";
        cin>>id;
        cout << "Email: ";
        cin>>email;
        cout << "Password: ";
        cin>>password;
        cout << "Age: ";
        cin>>age;
        accountType:
        cout << "Account Type:\n1. Customer\n2. Reviewer\n3. Admin\n4. Cancel Signup\n";
        int choice;
        cout<< "Enter your choice: ";
        cin>>choice;
        if(choice == 1){
            accountType = "Customer";
        }
        else if(choice == 2){
            accountType = "Reviewer";
        }
        else if(choice == 3){
            accountType = "Admin";
        }
        else{
            cout<< "Invalid choice\n";
            cout<< "Please try again\n";
            goto accountType;
        }


        otpSent:
        srand(time(0));
        for (int i = 0; i < 6; ++i) {
            otp += to_string(rand() % 10);
        }
        auto currTime = time(0);
        cout<< "**********\n";
        cout<< "*  " << otp << "   *\n";
        cout<< "**********\n";

        //cout<< "OTP SENT TO YOUR EMAIL\n";
        cout << "Enter OTP: ";
        int tries = 0;
        string userOTP;
        otpInput:
        cin>> userOTP;
        if(userOTP == otp){
            if(time(0) - currTime > 300){
                cout << "OTP Expired\n";
                cout << "Please resend the otp\n";
                cout<<"Type 1 to resend  , 2 to exit\n";
                int choice;
                cin>>choice;
                if(choice == 1){
                    otp = "";
                    goto otpSent;
                }
                else{
                    return;
                }
                //resend otp
            }

            user.addUser(this);
            cout << "Signup Successful\n";
        }
        else{
            if(tries == 3){
                cout << "You have exceeded the number of tries\n";
                cout << "Please try again later\n";
                return;
            }
            cout << "Invalid OTP\n";
            cout << "Please try again\n";
            tries++;
            goto otpInput;
        }
    }

    string getEmail(){
        return email;
    }

    virtual void login() = 0;

    void logout(){
        cout<< "Logged out\n";
    }
};

class userList{
    public:
    vector<User *>users;
    void addUser(User *  user){
        users.push_back(user);
    }
};