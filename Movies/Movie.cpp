#include"Movie.h"
#include<iostream>
using namespace std;

Movie::Movie():Director(""),Actor(""),Actress(""),personBudget() {};
Movie::Movie(std::string Dir,std::string Hero,std::string Heroine,int Budget):Director(Dir),Actor(Hero),Actress(Heroine),personBudget(Budget) {}


std::string Movie::getDirector() {
    return Director;
}
std::string Movie::getActor() {
    return Actor;
}
std::string Movie::getActress() {
    return Actress;
}
double Movie::getBudget() {
    return personBudget;
}
