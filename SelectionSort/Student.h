//
// Created by 92935 on 2020/4/30.
//

#ifndef ALGORITHM_STUDENT_H
#define ALGORITHM_STUDENT_H
#include <string>
using namespace std;
struct Student{
    string name;
    int score;
    bool operator<(const Student &otherStudent){
        return score != otherStudent.score ? score < otherStudent.score : name < otherStudent.name;
    }
    friend ostream& operator<<(ostream &ostream, const Student student){
        os<<"Student: "<<student.name<<" "<<student.score<<endl;
        return os;
    }

};
#endif //ALGORITHM_STUDENT_H
