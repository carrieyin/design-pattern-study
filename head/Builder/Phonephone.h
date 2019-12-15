//
// Created by yindd on 2019/12/15.
//

#ifndef DESIGN_PATTERN_STUDY_PHONEPHONE_H
#define DESIGN_PATTERN_STUDY_PHONEPHONE_H

#include <string>
#include <ostream>

using namespace std;
class Phonephone{
public:
    Phonephone();

    const string &getCama() const;

    void setCama(const string &cama);

    const string &getScreen() const;

    void setScreen(const string &screen);

    const string &getEarPhone() const;

    void setEarPhone(const string &earPhone);

    friend ostream &operator<<(ostream &os, Phonephone &phone);

private:
    string cama;
    string screen;
    string earPhone;

};
#endif //DESIGN_PATTERN_STUDY_PHONEPHONE_H
