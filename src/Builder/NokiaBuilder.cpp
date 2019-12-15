//
// Created by yindd on 2019/12/15.
//

#include "../../head/Builder/NokiaBuilder.h"
NokiaBuilder::NokiaBuilder()  {
    m_phone = new Phonephone();
}
void NokiaBuilder::setCamara() {
    m_phone->setCama("6000");
}

void NokiaBuilder::setScreen() {
    m_phone->setScreen("ganghua");
}

void NokiaBuilder::earPhone() {
    m_phone->setEarPhone("wire");
}

void NokiaBuilder::display() {
    cout<<*m_phone<<endl;
}
