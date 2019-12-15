//
// Created by yindd on 2019/12/15.
//

#include "../../head/Builder/Director.h"

void Director::creat(Builder *builder) {
    builder->setCamara();
    builder->setScreen();
    builder->earPhone();
}
