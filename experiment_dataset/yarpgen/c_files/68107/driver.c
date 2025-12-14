#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3035186943789239722LL;
_Bool var_3 = (_Bool)0;
int var_5 = -647713785;
int var_6 = -379793073;
unsigned int var_7 = 2554610935U;
long long int var_14 = -910089533263553826LL;
unsigned char var_16 = (unsigned char)210;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)7694;
int var_19 = -472952180;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
