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
        ostream<<"Student: "<<student.name<<" "<<student.score<<endl;
        return ostream;
    }

};
#endif //ALGORITHM_STUDENT_H

