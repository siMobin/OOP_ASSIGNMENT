#include <iostream>
using namespace std;

class Student
{
    int scores[5]; // instance variable to hold 5 exam scores

public:
    void input()   // function to read 5 integers and save them to "scores"
    {
        for(int i=0; i<5; i++)
        {
            cin >> scores[i];
        }
    }

    int calculateTotalScore()   // function to return the sum of the student's scores
    {
        int totalScore = 0;
        for(int i=0; i<5; i++)
        {
            totalScore += scores[i];
        }
        return totalScore;
    }
};

int main()
{
    int n;
    cin >> n;
    Student students[n];

    for(int i=0; i<n; i++)   // reading inputs for all the students
    {
        students[i].input();
    }

    int kristenTotalScore = students[0].calculateTotalScore(); // getting the total score of Kristen
    int count = 0;

    for(int i=1; i<n; i++)   // checking the scores of all other students
    {
        int totalScore = students[i].calculateTotalScore();
        if(totalScore > kristenTotalScore)
        {
            count++;
        }
    }

    cout << count; // printing the number of students who scored higher than Kristen
    return 0;
}
