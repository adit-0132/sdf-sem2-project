class Rewards{
    public:
    Rewards(string name , int id){
        this->name = name;
        this->id = id;
    }
    string name;
    int id;
};

class rewardList{
    public:
    vector<pair<string , vector<Rewards>> rewardList;
    void addRewards(string email , vector<Rewards> rewards){
        rewardList.push_back(make_pair(email , rewards));
    }
};