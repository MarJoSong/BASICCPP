#include <iostream>
#include "Observer.h"
#include "Observerable.h"

using namespace std;

class BBC:public Observerable{
 public:
  void SendNews(string news) override {
    SetChange("BBC: " + news);
  }
};

class User1 : public Observer {
  void Update(void *pArg) override {
    cout << "user 1 got News from " << (char*)pArg << endl;
  }
};

class User2 : public Observer {
  void Update(void *pArg) override {
    cout << "user 2 got News from " << (char*)pArg << endl;
  }
};

int main() {
  User1 u1;
  User2 u2;

  BBC bbc;
  bbc.Attach(&u1);
  bbc.Attach(&u2);

  cout << bbc.GetObserverCount() << endl;
  bbc.SendNews("morning news!");

  bbc.Detach(&u2);
  cout << bbc.GetObserverCount() << endl;
  bbc.SendNews("launch news");

  bbc.DetachAll();
  cout << bbc.GetObserverCount() << endl;
  bbc.SendNews("dinner news");


  return 0;
}
