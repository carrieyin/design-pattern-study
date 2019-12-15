//
// Created by yindd on 2019/12/15.
//

#include "../../head/Builder/iphoneBuiledr.h"

void iphoneBuiledr::setCamara() {
    m_phone->setCama("3d");
}

void iphoneBuiledr::setScreen() {
    m_phone->setScreen("玻璃");
}

void iphoneBuiledr::earPhone() {
    m_phone->setEarPhone("蓝牙");
}

iphoneBuiledr::iphoneBuiledr() {
    m_phone = new Phonephone();
}

void iphoneBuiledr::display() {
    cout<<m_phone;
}
