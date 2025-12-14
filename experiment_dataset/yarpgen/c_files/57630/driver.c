#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)241;
unsigned int var_2 = 3526125559U;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 17825047326799421343ULL;
int var_6 = 1640691636;
_Bool var_8 = (_Bool)1;
long long int var_10 = -7929292323586643826LL;
short var_11 = (short)24430;
int zero = 0;
long long int var_13 = -2488059984218851383LL;
unsigned char var_14 = (unsigned char)90;
unsigned long long int var_15 = 4932170653579411171ULL;
void init() {
}

void checksum() {
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
