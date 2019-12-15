//
// Created by yindd on 2019/12/11.
//

#ifndef DESIGN_PATTERN_STUDY_DECORATORPHONEB_H
#define DESIGN_PATTERN_STUDY_DECORATORPHONEB_H


#include "DecoratorPhone.h"
#include <iostream>
using  namespace std;
class DecoratorPhoneB : public DecoratorPhone{
public:
    DecoratorPhoneB(Phone* phone):DecoratorPhone(phone){}
    virtual void showDecorate(){
        DecoratorPhone::showDecorate();
        addDecorate();
    }

private:
    void addDecorate(){
        cout<<"Ôö¼Ó¹Ò¼þ"<<endl;
    };
};


#endif //DESIGN_PATTERN_STUDY_DECORATORPHONEB_H
