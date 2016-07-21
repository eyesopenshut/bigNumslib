#include <iostream>
#include "Bignum.h"
#include <cstring>
#include <math.h>
#include <iterator>
#include <list>

using namespace std;


list<int> bnum;

Bignum::Bignum(char *s)
{    
 int summ = 0;
 for (int i = 0;  s[i]; ++i) {
  char c = s[i];
  summ = c - '0';
 bnum.push_front(summ);
 }
 copy(bnum.begin(), bnum.end(), ostream_iterator<int>(cout," "));
 
}


 const Bignum operator+ (const Bignum& left, const Bignum& right)
 {
     int size_a=left.bnum, size_b=right.bnum;
     int *a= new int;
     int *b= new int;
         if(size_a>size_b)
            length=size_a+1;
            else
    length = size_b + 1;
 
for (int ix = 0; ix < length; ix++)
{
    b[ix] += a[ix]; // суммируем последние разряды чисел
    b[ix + 1] += (b[ix] / 10); // если есть разряд для переноса, переносим его в следующий разряд
    b[ix] %= 10; // если есть разряд для переноса он отсекается
}
 
if (b[length - 1] == 0)
    length--;
 }
 /*const Bignum operator- (const Bignum& left, const Bignum& right);
 const Bignum operator* (const Bignum& left, const Bignum& right);
 const Bignum operator/ (const Bignum& left, const Bignum& right);*/
 