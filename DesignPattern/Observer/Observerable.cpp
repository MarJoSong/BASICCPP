//
// Created by Mars on 2021/7/12.
//
#include "Observerable.h"

Observerable::Observerable() : _bChange(false) {

}

Observerable::~Observerable() {

}

void Observerable::Attach(Observer *pOb) {
  if (pOb == NULL) {
    return;
  }

  auto it = _Observer.begin();
  for (; it != _Observer.end(); it++) {
    if (*it == pOb) {
      return;
    }
  }

  _Observer.push_back(pOb);
}

void Observerable::Detach(Observer *pOb) {
  if (pOb == NULL || _Observer.empty()) {
    return;
  }

  _Observer.remove(pOb);
}

void Observerable::DetachAll() {
  _Observer.clear();
}

void Observerable::SendNews(string news) {
  SetChange(news);
}

void Observerable::SetChange(string news) {
  _bChange = true;

  Notify((void *) news.c_str());
}

void Observerable::Notify(void *pArg) {
  if (_bChange==false){
    return;
  }

  auto it = _Observer.begin();
  for (; it != _Observer.end() ; it++) {
    (*it)->Update(pArg);
  }

  _bChange = false;
}