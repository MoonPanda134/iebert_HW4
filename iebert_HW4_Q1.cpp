/*************************************************************************
Author : Isaiah Ebert
Program : HW4, Q1
Date Created : November 22, 2021
Date Last Modified : November 22, 2021
Usage : No command line arguments

Problem:
Create 'SocialMediaAccount' class template and derive classes 'Twitter' and
'Instagram' from this template. Test the derived classes with different 
types of arguments passed.
*************************************************************************/


#include <iostream>
#include <string>
#include "SocialMediaAccount.h"
#include "Twitter.h"
#include "Instagram.h"

using namespace std;


struct Profile{
    int userID;
    string username;
};


void main(){
    Twitter<string> Twitter1(false,string("Person"),0,0,0);
    cout << "Handler: " << Twitter1.getHandler() << endl;
    Twitter1.addFollower(string("follow1"));
    Twitter1.addFollowed(string("followed1"));
    cout << Twitter1.getHandler() << "Followers: " << Twitter1.displayFollowers() << endl;
    cout << Twitter1.getHandler() << "Followed: " << Twitter1.displayFollowed() << endl;
    Twitter1.RT();
    cout << "Number of Retweets: " << Twitter1.getRetweets() << endl;

    Twitter<Profile> Twitter2(true,string("Other"),0,0,0);
    cout << "Handler: " << Twitter2.getHandler() << endl;
    Twitter2.addFollower(string("follow1"));
    Twitter2.addFollowed(string("followed1"));
    cout << Twitter2.getHandler() << "Followers: " << Twitter2.displayFollowers() << endl;
    cout << Twitter2.getHandler() << "Followed: " << Twitter2.displayFollowed() << endl;
    Twitter2.RT();
    cout << "Number of Retweets: " << Twitter2.getRetweets() << endl;

    Instagram<string> Instagram1(true,string("Dude"),0,0,0);
    cout << "Handler: " << Instagram1.getHandler() << endl;
    Instagram1.addFollower(string("follow1"));
    Instagram1.addFollowed(string("followed1"));
    cout << Instagram1.getHandler() << "Followers: " << Instagram1.displayFollowers() << endl;
    cout << Instagram1.getHandler() << "Followed: " << Instagram1.displayFollowed() << endl;
    Instagram1.Like();
    cout << "Number of Likes: " << Instagram1.getlikeCount() << endl;

    Instagram<Profile> Instagram2(false,string("Guy"),0,0,0);
    cout << "Handler: " << Instagram2.getHandler() << endl;
    Instagram2.addFollower(string("follow1"));
    Instagram2.addFollowed(string("followed1"));
    cout << Instagram2.getHandler() << "Followers: " << Instagram2.displayFollowers() << endl;
    cout << Instagram2.getHandler() << "Followed: " << Instagram2.displayFollowed() << endl;
    Instagram2.Like();
    cout << "Number of Likes: " << Instagram2.getlikeCount() << endl;
}

