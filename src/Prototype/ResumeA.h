//
// Created by yindd on 2019/12/14.
//

#ifndef DESIGN_PATTERN_STUDY_RESUMEA_H
#define DESIGN_PATTERN_STUDY_RESUMEA_H


#include "../../head/Prototype/Resume.h"

class ResumeA : public Resume{
public:
    Resume * clone(){
        return new ResumeA(*this);
    }
};


#endif //DESIGN_PATTERN_STUDY_RESUMEA_H
