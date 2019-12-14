//
// Created by yindd on 2019/12/14.
//

#include "CompanyRecruit.h"

class Alibaba : public CompanyRecruit{
public:
    void offer() override {
        cout<<"30W"<<endl;
    }
};