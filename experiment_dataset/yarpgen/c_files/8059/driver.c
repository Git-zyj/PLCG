#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)8763;
long long int var_11 = -3668019430693789485LL;
unsigned short var_13 = (unsigned short)49583;
int zero = 0;
long long int var_20 = -3476002457274786397LL;
int var_21 = 582660295;
unsigned short var_22 = (unsigned short)2951;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
