#include <iostream>
#include "head/Decorator/Phone.h"
#include "head/Decorator/NokiaPhone.h"
#include "head/Decorator/DecoratorPhoneA.h"
#include "head/Decorator/DecoratorPhoneB.h"
#include "src/Prototype/ResumeA.h"

int main() {
    //装饰模式测试
    Phone* iphone = new NokiaPhone("nokia 6000");
    Phone* dpa = new DecoratorPhoneA(iphone);
    Phone* dpb = new DecoratorPhoneB(dpa);
    dpb->showDecorate();

    //原型模式测试
    Resume * ra = new ResumeA();
    ra->setAge(25);
    ra->setName("小碗");

    ResumeA *pA = (ResumeA *) ra->clone();
    delete ra;
    cout<<*pA<<endl;
    return 0;
}
