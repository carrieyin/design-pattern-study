//
// Created by yindd on 2019/12/11.
//

#ifndef DESIGN_PATTERN_STUDY_DECORATORPHONE_H
#define DESIGN_PATTERN_STUDY_DECORATORPHONE_H


#include "Phone.h"

class DecoratorPhone : public Phone{
private:
    Phone* phone;
public:
    DecoratorPhone(Phone* phone){
        this->phone = phone;
    }
    virtual void showDecorate(){phone->showDecorate();}
};;


#endif //DESIGN_PATTERN_STUDY_DECORATORPHONE_H
