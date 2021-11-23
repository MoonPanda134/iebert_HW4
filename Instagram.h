#ifndef INSTAGRAM_H
#define INSTAGRAM_H


#include "SocialMediaAccount.h"

template <class T>
class Instagram:public SocialMediaAccount<T>{
    public:
    Instagram(bool priv, T handle, int follower, int followed, int likes){
        private = priv;
        handler = handle;
        followerCount = follower;
        followedCount = followed;
        likeCount = likes;
    }

    void setlikeCount(int likes){likeCount = likes;}
    int getlikeCount(){return likeCount;}

    void Like(){likeCount++;}
    
    private:
    int likeCount = 0;
};

template<>class Instagram <Profile>{
    public:
    Instagram(bool priv, Profile handle, int follower, int followed, int likes){
        handle.userID=0;
        handle.username = string(handle);
        handler = handle;
        private = priv;
        followerCount = follower;
        followedCount = followed;
        likeCount = likes;
    }
    
};

#endif //INSTAGRAM_H