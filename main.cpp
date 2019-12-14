#include <iostream>
#include "head/Decorator/Phone.h"
#include "head/Decorator/NokiaPhone.h"
#include "head/Decorator/DecoratorPhoneA.h"
#include "head/Decorator/DecoratorPhoneB.h"
#include "src/Prototype/ResumeA.h"

int main() {
    //װ��ģʽ����
    Phone* iphone = new NokiaPhone("nokia 6000");
    Phone* dpa = new DecoratorPhoneA(iphone);
    Phone* dpb = new DecoratorPhoneB(dpa);
    dpb->showDecorate();

    //ԭ��ģʽ����
    Resume * ra = new ResumeA();
    ra->setAge(25);
    ra->setName("С��");

    ResumeA *pA = (ResumeA *) ra->clone();
    delete ra;
    cout<<*pA<<endl;
    return 0;
}
