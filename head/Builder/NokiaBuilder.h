//
// Created by yindd on 2019/12/15.
//

#ifndef DESIGN_PATTERN_STUDY_NOKIABUILDER_H
#define DESIGN_PATTERN_STUDY_NOKIABUILDER_H


#include "Builder.h"
#include "Phonephone.h"

class NokiaBuilder : public  Builder{
private:
    Phonephone* m_phone;
public:
    NokiaBuilder();

    virtual void setCamara();

    virtual void setScreen();

    virtual void earPhone();

    void display();

};


#endif //DESIGN_PATTERN_STUDY_NOKIABUILDER_H
