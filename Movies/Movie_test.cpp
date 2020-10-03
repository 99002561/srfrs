#include "Movie.cpp"
#include "Genre.cpp"
#include "Moviedb.cpp"
#include <gtest/gtest.h>

#include<bits/stdc++.h>
namespace {

class MoviedbTest : public ::testing::Test {

  protected:
    void SetUp() {
        movies.addMovie("Raj", "abc", "sggs",50, "Raj", "abc",80,70.3);
       /* trips.addTrip("Bengaluru", "Pune", "6E501","Indigo", 500);
        trips.addTrip("Hyderabad", "Chennai", "AI850","AirIndia", 400);
        trips.addTrip("Mumbai", "Bengaluru","SG301",  "Spicejet", 600);
        trips.addTrip("Bengaluru", "Delhi", "SG302","Spicejet", 1200);
        trips.addTrip("Pune", "Bengaluru","AI900",  "AirIndia", 550);*/
    }
    void TearDown() {}
    Moviedb movies;
};
}

TEST_F(MoviedbTest, AddTripTest) {
    movies.addMovie("Raj", "abc", "sggs",50, "Raj", "abc",80,70.3);
    EXPECT_NE((Movie*)NULL, movies.findMovieById("sggs"));
    EXPECT_EQ(8, movies.countAll());
}
/*TEST_F(FlightTripDbTest, RemoveTripTest) {
    trips.removeTrip("6E501");
    EXPECT_EQ(NULL, trips.findTripById("6E501"));
    EXPECT_EQ(5, trips.countAll());
}
TEST_F(FlightTripDbTest, CountTest) {             //Just After Setup
    EXPECT_EQ(6, trips.countAll());
}
TEST_F(FlightTripDbTest, CountByOperatorTest) {  //Just After Setup
    int count = trips.countTripsByOperator("Indigo");
    EXPECT_EQ(2, count);*/
    int main(int argc,char** argv)
{
testing::InitGoogleTest(&argc,argv);
return RUN_ALL_TESTS();

}
