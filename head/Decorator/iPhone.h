//
// Created by yindd on 2019/12/11.
//

#ifndef DESIGN_PATTERN_STUDY_IPHONE_H
#define DESIGN_PATTERN_STUDY_IPHONE_H

#include <iostream>
using namespace std;

class iPhone {
public:
    iPhone(string name){
        m_name = name;
    };
    virtual ~iPhone(){};
    void showDecorate(){
        cout<<m_name<<"µÄ×°ÊÎ"<<endl;
    };
private:
    string m_name;
};


#endif //DESIGN_PATTERN_STUDY_IPHONE_H
