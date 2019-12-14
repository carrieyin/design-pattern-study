//
// Created by yindd on 2019/12/14.
//

#ifndef DESIGN_PATTERN_STUDY_COMPANYRECRUIT_H
#define DESIGN_PATTERN_STUDY_COMPANYRECRUIT_H

#include <iostream>
using namespace std;

class CompanyRecruit{
public:
    void careerTalk()
    {
        cout<<"face to face talk"<<endl;
    }

    virtual void offer()= 0;

    void recruitProcess()
    {
        careerTalk();
        offer();
    }
};
#endif //DESIGN_PATTERN_STUDY_COMPANYRECRUIT_H
