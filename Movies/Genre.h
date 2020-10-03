#ifndef GENRE_H_INCLUDED
#define GENRE_H_INCLUDED
#include"Movie.h"
#include<iostream>
using namespace std;
class Genre : public Movie {
    std::string subject;
    std::string title;
    int length;
    double rating;
    // -lgtest -lgtest_main -lpthread

  public:
    Genre();
    Genre(std::string,std::string,std::string,int,std::string,std::string,int,double);
    double IsInox() override;
    double IsPVPPVR() override;
    double IsOthers() override;
    std::string getSubject();
    std::string getTitle();
    double getLength();
    double getRating();


};


#endif // GENRE_H_INCLUDED
