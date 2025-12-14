#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)57066;
int var_5 = 1449645337;
unsigned int var_6 = 2492574561U;
short var_7 = (short)-13888;
int zero = 0;
int var_11 = -669644409;
unsigned short var_12 = (unsigned short)1877;
long long int var_13 = 2390376428825097770LL;
unsigned short var_14 = (unsigned short)51887;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
