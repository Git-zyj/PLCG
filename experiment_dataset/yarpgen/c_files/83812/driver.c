#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -304212837;
unsigned char var_3 = (unsigned char)80;
signed char var_5 = (signed char)-14;
signed char var_6 = (signed char)24;
unsigned short var_8 = (unsigned short)62396;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_11 = 1559233943;
unsigned long long int var_12 = 2839790713415271657ULL;
long long int var_13 = 25229904219645588LL;
long long int var_14 = -4055837702832577658LL;
unsigned int var_15 = 2220148115U;
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
