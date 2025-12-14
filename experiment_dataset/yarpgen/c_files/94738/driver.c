#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)40845;
_Bool var_6 = (_Bool)1;
long long int var_14 = 2637066663533088179LL;
int zero = 0;
long long int var_17 = 3180932120735869406LL;
unsigned char var_18 = (unsigned char)115;
long long int var_19 = -3217624679261025311LL;
long long int var_20 = 6232066505349477622LL;
unsigned short var_21 = (unsigned short)63422;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
