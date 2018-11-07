#include <iostream>


#include"box.h"
box::box(int a,int b,int c)
{
  length=a;
  width=b;
  height=c;
}
/*void box::setlength(int a)
{
  length=a;
}
void box::setwidth(int b)
{
  width=b;
}
void box::setheight(int c)
{
  height=c;
}*/
int box::getlength()
{
  return length;
}
int box::getwidth()
{
  return width;
}
int box::getheight()
{
  return height;
}
int box::getarea()
{
  return length*width*height;
}
