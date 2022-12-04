// Kieran Yalla
// Class: CMSC140 CRN
// Instructor: Professor Koo
// Programming Classwork 3
// Develop a program that calculates the total score and the average score for Quiz and classwork completed in this class.
// Due Date: 9/16/21 4:00pm EST
// I pledge that I have completed the programming assignment independently. 
// I have not copied the code from a student or any source.
// I have not given my code to any student.
// Print your Name here: Kieran Yalla

#include <iostream>
using namespace std;
int main() {
    char fname[20], lname[20];
    double syl, chap1, chap2, prog1, prog2;
    double score, average;
    
    cout << "Whats your first name: ";
    cin >> fname;
    cout << "Whats your last name: ";
    cin >> lname;
    cout << "Enter Syllabus Quiz Score ranging from 0 to 100: ";
    cin >> syl;
    cout << "Enter Chapter 1 Quiz ranging from 0 to 100: ";
    cin >> chap1;
    cout << "Enter Chapter 2 Quiz ranging from 0 to 100: ";
    cin >> chap2;
    cout << "Enter Programming Classwork1 ranging from 0 to 100: ";
    cin >> prog1;
    cout << "Enter Programming Classwork2 ranging from 0 to 100: ";
    cin >> prog2;
    
    score = syl + chap1 + chap2 + prog1 + prog2;
    average = score / 5;
    
    cout << fname << " " << lname << " " << "Your score is: " << score << " " << "Your average score is: " << average;
    
    return 0;
}