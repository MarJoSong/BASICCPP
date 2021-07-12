//
// Created by Mars on 2021/7/12.
//

#include "Singleton.h"


//Singleton *Singleton::This = new Singleton;

Singleton *Singleton::This = nullptr;
const Singleton *Singleton::getInstance() {
  if (!This) {
    This = new Singleton;
  }
  return This;
}
