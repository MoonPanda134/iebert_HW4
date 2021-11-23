#ifndef SOCIALMEDIAACCOUNT_H
#define SOCIALMEDIAACCOUNT_H

#include <iostream>
#include <string>
using std::cout,std::endl;

const int maxFollowers = 20;
const int maxFollowed = 20;

template <class T>
class SocialMediaAccount{
    public:
    SocialMediaAccount(){};
    SocialMediaAccount(bool priv, T handle, int follower, int followed){
        private = priv;
        handler = handle;
        followerCount = follower;
        followedCount = followed;
    }

    void setHandler(T handle){handler = handle;}
    void setfollowerCount(int follower){followerCount = follower;}
    void setfollowedCount(int followed){followedCount = followed;}
    void setprivacy(bool priv){private = priv;}
    T getHandler(){return handler;}
    int getfollowerCount(){return followerCount;}
    int getfollowedCount(){return followedCount;}
    bool getprivacy(){return private;}

    void addFollower(T user){
        if(followerCount < maxFollowers){
            followers[followerCount] = user;
            followerCount++;
        }
        else{
            cout << "This account has too many followers to add another." << endl;
        }
    }
    void addFollowed(T user){
        if(followedCount < maxFollowed){
            followed[followedCount] = user;
            followedCount++;
        }
        else{
            cout << "This account has too many followed to add another." << endl;
        }
    }
    void displayFollowers(){
        if(private == false){
            cout << "\n~Followers~"
            for(int i = 0; i<=followerCount; i++;){
                cout << endl << i << ": " << followers[i];
            }
        }
        else{
            cout << "\nThis account's settings are set to private. Therefore the requested information is protected." << endl;
        }
    }
    void displayFollowed(){
        if(private == false){
            cout << "\n~Followed~"
            for(int i = 0; i<=followedCount; i++;){
                cout << endl << i << ": " << followed[i];
            }
        }
        else{
            cout << "\nThis account's settings are set to private. Therefore the requested information is protected." << endl;
        }
    }

    private:
    T handler;
    T followers[maxFollowers];
    T followed[maxFollowed];
    int followerCount = 0;
    int followedCount = 0;
    bool private = true;
};


template<>class SocialMediaAccount <Profile>{
    public:
    SocialMediaAccount(bool priv, Profile handle, int follower, int followed){
        handle.userID=0;
        handle.username = string(handle);
        handler = handle;
        private = priv;
        followerCount = follower;
        followedCount = followed;
    }
};

#endif //SOCIALMEDIAACCOUNT_H
