#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)201;
unsigned int var_5 = 1625492999U;
_Bool var_7 = (_Bool)0;
int var_10 = 498631151;
long long int var_14 = 9086694497497314131LL;
int zero = 0;
long long int var_17 = -1727392383142099490LL;
unsigned int var_18 = 2790773014U;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-5734;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
