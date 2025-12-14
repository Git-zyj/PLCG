#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)51;
_Bool var_7 = (_Bool)0;
int var_9 = 1297716795;
int var_12 = -93872691;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)33976;
int var_18 = 949560043;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
