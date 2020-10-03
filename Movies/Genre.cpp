#include"Genre.h"
#include<iostream>
using namespace std;
Genre::Genre():Movie(){
    subject="";
    title="";
    length=0;
    rating=0;
  }
Genre::Genre(std::string Dir,std::string Hero,std::string Heroine,int Budget,std::string sub,std::string tit,int len,double rat):Movie(Dir,Hero,Heroine,Budget) {
    subject=sub;
    title=tit;
    length=len;
    rating =rat;
}
std::string Genre::getSubject(){
return subject;}
std::string Genre::getTitle(){
return title;}
 double Genre::getLength(){
return length;}
 double Genre::getRating(){
return rating;}
