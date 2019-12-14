//
// Created by yindd on 2019/12/14.
//

#ifndef DESIGN_PATTERN_STUDY_RESUME_H
#define DESIGN_PATTERN_STUDY_RESUME_H

#include <string>
#include <ostream>

using  namespace std;

class Resume {
public:
    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        Resume::name = name;
    }

    int getAge() const {
        return age;
    }

    void setAge(int age) {
        Resume::age = age;
    }

    virtual Resume* clone() = 0;
    ~Resume(){

    };

    friend ostream &operator<<(ostream &os, const Resume &resume) {
        os << "name: " << resume.name << " age: " << resume.age;
        return os;
    }

private:
    string name;
    int age;
};


#endif //DESIGN_PATTERN_STUDY_RESUME_H
