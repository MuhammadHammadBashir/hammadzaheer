#ifndef BOX_H
#define BOX_H
#include <iostream>

using namespace std;
class box{
public:
  box();
  box(int,int,int);
  void setlength(int);
  void setwidth(int);
  void setheight(int);
  int getlength();
  int getwidth();
  int getheight();
  int getarea();






private:
  int length;
  int width;
  int height;
};
#endif
