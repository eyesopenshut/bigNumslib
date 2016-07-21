#include <stdio.h>
#include <iostream>
#include <list>
#include <cstring>

using namespace std;

class Bignum
{
    
public:
list<int> bnum;
Bignum(char *);
    ~Bignum();
friend const Bignum operator+ (const Bignum& left, const Bignum& right);

private:


/*friend const Bignum operator- (const Bignum& left, const Bignum& right);
friend const Bignum operator* (const Bignum& left, const Bignum& right);
friend const Bignum operator/ (const Bignum& left, const Bignum& right);*/
  
    
};