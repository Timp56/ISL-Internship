#include <fstream>
#include <iostream>
using namespace std;

struct studentData {
    string studentName;
    int homework;
    int recitation;
    int quiz;
    int exam;
    double average;
};

void addStudentData(studentData students[], string studentName, int homework, int recitation, int quiz, int exam, int length, int index) {

    int addedData = homework + recitation + quiz + exam;
    double average = (double)addedData/4.0;
    studentData stu = {studentName, homework, recitation, quiz, exam, average};
    students[index] = stu;
};

char calcLetter(double avg) {
    if (avg > 90) {
        return 'A';
    }

    else if (80 < avg < 89.9) {
        return 'B';
    }

    else if (70 < avg < 79.9) {
        return 'C';
    }

    else if (60 < avg < 69.9) {
        return 'D';
    }

    else {
        return 'F';
    }
};

// length: Number of items in the array
void printList(const studentData students[], int length) {
    // addStudentData(pp, "Jim", 90,85,70,92, length, 0);
    // addStudentData(pp, "Tim", 70,65,32,90, length, 1);
    // addStudentData(pp, "Rim", 97,100,89,93, length, 2);
    // addStudentData(pp, "Sim", 40,32,51,48, length, 3);
    for (int i = 0; i < length; i++) {
        cout << students[i].studentName << " earned " << students[i].average << "which is an" << calcLetter(students[i].average) << endl;
    }
};

int main(int argc, char const *argv[]) {

    // INITIALIZE LOCAL VARIABLE : LENGTH / LINE / NAME, HOMEWORK, RECITATION, QUIZ, EXAM
    int length = 0;
    string line;

    ifstream ifile(argv[1]);
    ofstream ofile(argv[2]);
    // INITIALIZE LOWER/UPPERBOUND GRADE WITH ARGUMENTS

    // INITIALIZE STUDENTDATA STRUCT (ARRAY)

    // USE GETLINE() TO GET ROW FROM INPUT.CSV
    // PARSE THE ROW WITH STRINGSTREAM()
    // WITH THE PARSED DATA, ADD STUDENTDATA WITH ADDSTUDENTDATA()
    // ALSO NEED TO CALCULATE AVERAGE BEFORE ADDING

    // BASED ON THE GIVEN UPPER/LOWER BOUND GRADE, COMPLETE THE ROW TO WRITE IN OUTPUT.CSV (REFER TO PDF)

    // PRINTOUT THE RESULT!

    // CLOSE THE FILE OBJECT

}