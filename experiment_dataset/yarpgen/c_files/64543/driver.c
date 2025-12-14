#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-78;
int var_4 = -1410205132;
int var_6 = 210303865;
long long int var_9 = 7346292444773305933LL;
unsigned long long int var_11 = 16641164714767483684ULL;
unsigned int var_13 = 887453355U;
int zero = 0;
short var_14 = (short)30441;
unsigned long long int var_15 = 15618849734887057986ULL;
short var_16 = (short)-14514;
unsigned short var_17 = (unsigned short)33432;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
