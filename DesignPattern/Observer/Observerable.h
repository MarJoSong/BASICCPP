//
// Created by Mars on 2021/7/12.
//

#ifndef OBSERVER__OBSERVERABLE_H_
#define OBSERVER__OBSERVERABLE_H_

#include <list>
#include <string>
#include "Observer.h"

using namespace std;

class Observerable {
 public:
  Observerable();
  virtual ~Observerable();

  size_t GetObserverCount() const {
    return _Observer.size();
  }

  //注册观察者
  void Attach(Observer* pOb);

  //反注册观察者
  void Detach(Observer* pOb);
  void DetachAll();

  virtual void SendNews(string news);

 protected:
  void SetChange(string news);

 private:
  void Notify(void *pArg);

 private:
  list<Observer *> _Observer;
  bool _bChange;
};

#endif //OBSERVER__OBSERVERABLE_H_
