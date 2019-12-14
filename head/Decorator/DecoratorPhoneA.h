//
// Created by yindd on 2019/12/11.
//

#ifndef DESIGN_PATTERN_STUDY_DECORATORPHONEA_H
#define DESIGN_PATTERN_STUDY_DECORATORPHONEA_H


#include "DecoratorPhone.h"
#include <iostream>
using  namespace std;

class DecoratorPhoneA : public DecoratorPhone{
public:
    DecoratorPhoneA(Phone* phone):DecoratorPhone(phone){}
    virtual void showDecorate(){DecoratorPhone::showDecorate(); addDecorate();};
private:
    void addDecorate(){
        cout<<"Ôö¼ÓÌùÆÁÄ»"<<endl;
    };

};


#endif //DESIGN_PATTERN_STUDY_DECORATORPHONEA_H
