//
// Created by yindd on 2019/12/15.
//

#ifndef DESIGN_PATTERN_STUDY_IPHONEBUILEDR_H
#define DESIGN_PATTERN_STUDY_IPHONEBUILEDR_H


#include "Builder.h"
#include "Phonephone.h"

class iphoneBuiledr : public Builder{
public:
    iphoneBuiledr();

    virtual void setCamara();

    virtual void setScreen();

    virtual void earPhone();

    void display();
private:
    Phonephone* m_phone;
};


#endif //DESIGN_PATTERN_STUDY_IPHONEBUILEDR_H
