#include <iostream>
#include "head/Decorator/Phone.h"
#include "head/Decorator/NokiaPhone.h"
#include "head/Decorator/DecoratorPhoneA.h"
#include "head/Decorator/DecoratorPhoneB.h"
#include "src/Prototype/ResumeA.h"
#include "head/Template/CompanyRecruit.h"
#include "head/Template/Alibaba.h"
#include "head/Template/Tencent.h"
#include "head/Builder/Director.h"
#include "head/Builder/NokiaBuilder.h"

int main() {
    //װ��ģʽ����
    Phone* iphone = new NokiaPhone("nokia 6000");
    Phone* dpa = new DecoratorPhoneA(iphone);
    Phone* dpb = new DecoratorPhoneB(dpa);
    dpb->showDecorate();

    //ԭ��ģʽ����
    Resume * ra = new ResumeA();
    ra->setAge(25);
    ra->setName("lisan");

    ResumeA *pA = (ResumeA *) ra->clone();
    delete ra;
    cout<<*pA<<endl;

    //ģ��ģʽ����
    CompanyRecruit* p = new Alibaba();
    p->recruitProcess();
    p = new Tencent();
    p->recruitProcess();

    //builder test
    Director director;
    NokiaBuilder* nokiaBuiler = new NokiaBuilder();
    director.creat(nokiaBuiler);
    nokiaBuiler->display();
    return 0;
}
