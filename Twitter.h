#ifndef TWITTER_H
#define TWITTER_H


#include "SocialMediaAccount.h"

template <class T>
class Twitter:public SocialMediaAccount<T>{
    public:
    Twitter(bool priv, T handle, int follower, int followed, int retweets){
        private = priv;
        handler = handle;
        followerCount = follower;
        followedCount = followed;
        retweetCount = retweets;
    }
    void setRetweetCount(int retweets){retweetCount = retweets;}
    int getRetweets(){return retweetCount;}

    void RT(){retweetCount++;}

    private:
    int retweetCount = 0;
};

template<>class Twitter <Profile>{
    public:
    Twitter(bool priv, Profile handle, int follower, int followed, int retweets){
        handle.userID=0;
        handle.username = string(handle);
        handler = handle;
        private = priv;
        followerCount = follower;
        followedCount = followed;
        retweetCount = retweets;
    }
};


#endif //TWITTER_H