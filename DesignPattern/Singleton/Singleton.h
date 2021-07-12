//
// Created by Mars on 2021/7/12.
//

#ifndef SINGLETON__SINGLETON_H_
#define SINGLETON__SINGLETON_H_

#include <iostream>

using namespace std;

class Singleton {
 public:
  static const Singleton *getInstance();
  static void doSomething() {
    cout << "Do something" << endl;
  }

  //私有化构造和析构
 private:
  Singleton() {;}
  ~Singleton() {;}

  static Singleton *This;// 使用静态变量帮助解决资源的分配和释放
};

#endif //SINGLETON__SINGLETON_H_
