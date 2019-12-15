//
// Created by yindd on 2019/12/11.
//

#ifndef DESIGN_PATTERN_STUDY_NOKIAPHONE_H
#define DESIGN_PATTERN_STUDY_NOKIAPHONE_H

#include <iostream>
#include "Phone.h"

using  namespace std;
class NokiaPhone : public Phone{
public:
    NokiaPhone(string name){
        m_name = name;
    }
    virtual ~NokiaPhone(){

    };
    void showDecorate(){
        cout<<m_name<<"��װ��"<<endl;
    };
private:
    string m_name;
};


#endif //DESIGN_PATTERN_STUDY_NOKIAPHONE_H
