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

void addStudentData(studentData students[], string studentName, int
homework, int recitation, int quiz, int exam, int length, int index) {

    int addedData = homework + recitation + quiz + exam;
    double average = addedData/4.0;
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
    studentData pp[4];
    addStudentData(pp, "Jim", 90,85,70,92, length, 0);
    addStudentData(pp, "Tim", 70,65,32,90, length, 1);
    addStudentData(pp, "Rim", 97,100,89,93, length, 2);
    addStudentData(pp, "Sim", 40,32,51,48, length, 3);
    for (int i = 0; i < sizeof(pp); i++) {
        cout << pp[i].studentName << "earned" << pp[i].average << "which is an" << calcLetter(pp[i].average) << endl;
    }
};