#include <iostream>
#include "Singleton.h"

int main() {
  Singleton::getInstance()->doSomething();

  Singleton::getInstance()->doSomething();

  return 0;
}
