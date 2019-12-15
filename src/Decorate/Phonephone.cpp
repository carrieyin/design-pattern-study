//
// Created by yindd on 2019/12/11.
//

#include <string>
#include "../../head/Builder/Phonephone.h"

const string &Phonephone::getCama() const {
    return cama;
}

void Phonephone::setCama(const string &cama) {
    Phonephone::cama = cama;
}

const string &Phonephone::getScreen() const {
    return screen;
}

void Phonephone::setScreen(const string &screen) {
    Phonephone::screen = screen;
}

const string &Phonephone::getEarPhone() const {
    return earPhone;
}

void Phonephone::setEarPhone(const string &earPhone) {
    Phonephone::earPhone = earPhone;
}

Phonephone::Phonephone()  {}

ostream &operator<<(ostream &os, Phonephone &phone) {
    os << "cama: " << phone.cama << " screen: " << phone.screen << " earPhone: " << phone.earPhone;
    return os;
}
