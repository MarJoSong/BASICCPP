//
// Created by Mars on 2021/7/12.
//

#ifndef OBSERVER__OBSERVER_H_
#define OBSERVER__OBSERVER_H_

class Observer {
 public:
  //virtual ~Observer() = 0;//虚函数不可以是抽像函数嘛
  virtual void Update(void *pArg) = 0;
};

#endif //OBSERVER__OBSERVER_H_
