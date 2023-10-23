#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include "CSVparser.hpp"
#include <string.h>
#include <time.h>
#include <vector>

using namespace std;

struct CourseInfo {
public:
    CourseInfo(
        string number,
        string name,
        string prerequisite,
    ) {
        Number = number;
        Name = name;
        Prerequisite = prerequisite;
    }

    string Number;
    string Name;
    string Prerequisite;
};

int main(int argc, char* argv) {


    ifstream inputfile;
    inputfile.open("datastruct.csv");

    string line = "";
    while(getline(inputfile, line)) {

            string courseNumber;
            string courseName;
            string prerequisiteId;
            string tempString;

            stringstream inputString(line);

            getline(inputString, courseNumber, ',');
            getline(inputString, courseName, ',');
            getline(inputString, prerequisiteId, ',');

            line = "";
    };
    
    void menu() {
    int choice = 0;
    while(choice != 9) {
        cout << "Welcome to the course planner." << endl;
        cout << "  1. Load Data Structure" << endl;
        cout << "  2. Print Course List" << endl;
        cout << "  3. Print Course" << endl;
        cout << "  9. Exit" << endl;
        cin >> choice;
    }

    if(choice = 1) {
        cout << courseNumber << courseName << prerequisiteId << endl;
    }
    else if(choice = 2) {
        cout << courseNumber << courseName << endl;
    }
    else if(choice = 3) {
        cout << courseNumber << endl;
    }
}
}

/*struct Course {
    string courseNumber;
    string courseName;
    string prerequisiteId;
};

vector<Course> loadCourse(string csvPath) {
    vector<Course> course;

    csv::Parser file = csv::Parser(csvPath);

    try {
        for(int i = 0; i < file.rowCount(); i++) {
            Course course;
            course.courseNumber = file[i][0];
            course.courseName = file[i][1];
            course.prerequisiteId = file[i][2];

        }
    } catch(csv::Error &e) {
        std::cerr << e.what() << std::endl;
    }
    return course;
}


int main(int argc, char* argv[]) {
    string csvPath;
    switch(argc) {
        csvPath = "datastruct.csv";
    }

    vector<Course> course;

    clock_t ticks;

    int choice = 0;
    while(choice != 9) {
        cout << "Welcome to the course planner." << endl;
        cout << "  1. Load Data Structure" << endl;
        cout << "  2. Print Course List" << endl;
        cout << "  3. Print Course" << endl;
        cout << "  9. Exit" << endl;
        cin >> choice;

        switch(choice) {

        case 1:
            ticks = clock();

            course = loadCourse(csvPath);

            cout << course.size() << " bids read" << endl;

            // Calculate elapsed time and display result
            ticks = clock() - ticks; // current clock ticks minus starting clock ticks
            cout << "time: " << ticks << " clock ticks" << endl;
            cout << "time: " << ticks * 1.0 / CLOCKS_PER_SEC << " seconds" << endl;

            break;
        }
    }


    getline(classes, number, ',');
    getline(classes, name, ',');
    getline(classes, id, ',');
    
    cout << number << endl; 
    cout << name << endl; 
    cout << id << endl; 


    cout << "Welcome to the course planner." << endl;
    cout << "\n " << endl;
    cout << "1. Load Data Structure." << endl;
    cout << "\n " << endl;
    cout << "2. Print Course List." << endl;
    cout << "\n " << endl;
    cout << "3. Print Course." << endl;
    cout << "\n " << endl;
    cout << "9. Exit." << endl;

    int x;
    cout << "What would you like to do?"; // Type a number and press enter
    cin >> x;


    switch (x) {

    case 1:
    cout<< "Load Data Structure: " << endl;
    break;

    case 2: 
    cout<< "Here is a sample schedule:" << endl;
    break;

    case 3: 
    cout << "What course do you want to know about?" << endl;

    int y;
    cin >> y;
    y = 0;


    break;
    case 4:
    cout << " Thank you for using the course planner!" << endl;
    break;

    case 5:
    cout<< "5 is not a valid option."  << endl;
    break;


    case 6:
    cout<< "6 is not a valid option." << endl;
    break;


    case 7:
    cout<< "7 is not a valid option." << endl;
    break;


    case 8:
    cout<< "8 is not a valid option." << endl;
    break;


    case 9:
    cout<< "Exiting..." << endl;
    exit(0);
    break;
    }

    dataStruct.close();
    return 0;*/
