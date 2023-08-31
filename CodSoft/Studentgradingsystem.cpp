#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> studentNames;
    std::vector<double> studentGrades;

    int numStudents;
    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
        std::string name;
        double grade;

        std::cout << "Enter the name of student " << i + 1 << ": ";
        std::cin >> name;

        std::cout << "Enter the grade of student " << i + 1 << ": ";
        std::cin >> grade;

        studentNames.push_back(name);
        studentGrades.push_back(grade);
    }

    double sumGrades = 0.0;
    double highestGrade = studentGrades[0];
    double lowestGrade = studentGrades[0];

    for (double grade : studentGrades) {
        sumGrades += grade;
        highestGrade = std::max(highestGrade, grade);
        lowestGrade = std::min(lowestGrade, grade);
    }

    double averageGrade = sumGrades / numStudents;

    std::cout << "\nStudent Grades Report:" << std::endl;
    for (int i = 0; i < numStudents; ++i) {
        std::cout << "Student: " << studentNames[i] << " - Grade: " << studentGrades[i] << std::endl;
    }

    std::cout << "\nAverage Grade: " << averageGrade << std::endl;
    std::cout << "Highest Grade: " << highestGrade << std::endl;
    std::cout << "Lowest Grade: " << lowestGrade << std::endl;

    return 0;
}