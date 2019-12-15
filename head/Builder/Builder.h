//
// Created by yindd on 2019/12/15.
//

#ifndef DESIGN_PATTERN_STUDY_BUILDER_H
#define DESIGN_PATTERN_STUDY_BUILDER_H

#include <string>
#include <iostream>
#include "Phonephone.h"

using  namespace std;

class Builder {
public:
    virtual void setCamara() = 0;
    virtual void setScreen() = 0;
    virtual void earPhone() = 0;
public:
};


#endif //DESIGN_PATTERN_STUDY_BUILDER_H
