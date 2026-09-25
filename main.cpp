#include <iostream>

// Homework 5 — Richard Webster
// CIS 5 Week 05 · Rule engine lite

using std::cin;
using std::cout;
using std::endl;

int main() {
  int score = 0;
  int attendance = 0;

  // TODO: cout question, then cin, for score and for attendance
  cout << "Enter Overall Score: " << endl;
  cin >> score;

  cout << "Enter Attendance Percentage: " << endl;
  cin >> attendance;

  // Edge values: (list just-below / exactly-on / just-above for each threshold here)
  
  bool overallscore = false;
  bool overallattendance = false;

// These are my edge values. score must be greater or equal 70 for the
// bool overallscore to be true.  Same with overall attendance, except
// overallattendance I assigned as greater or equal than 60 for the bool
// overall atttendance to be true.
  overallscore = score >= 70;
  overallattendance = attendance >= 60;
  
  //The starting if statement I used || so that if any of the
  //variables score or attendance were out of the range of 
  //0 to 100, it would print "invalid".  This is the first
  //line of the program because if the user inputs the
  //a number out of range, the program does not continue asking 
  //for inputs, but ends.
  if ((score < 0 || score > 100) || (attendance < 0 || attendance > 100)){
    cout << "Your entry is invalid." << endl;
  } 
    else if (overallscore && overallattendance){
    cout << "Class Score and Attendance Satisfactory: Pass" << endl;
  } 
  //Here I used && because this statement I want the if statement
  //to execute the cout if both are true, if not it moves on to
  //the next statement.  If I used ||, it would have accepted
  //either statement and printed the cout, and would not have
  //considered the next else if statement.
    else if (!overallscore && overallattendance){
    cout << "Score requirement not met." << endl;
  } 
    else if (overallscore && !overallattendance){
    cout << "Attendance Warning. Attendance not satisfactory." << endl;
  } 
    else {
    cout << "Class Score and Attendance Unsatisfactory." << endl;
  }
  
  // TODO: two comments that explain a choice (why invalid first, why && not ||, why >= not >)

  return 0;
}
