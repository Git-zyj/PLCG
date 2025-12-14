#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 4176065714U;
unsigned char var_6 = (unsigned char)186;
long long int var_8 = 5125513072574205678LL;
signed char var_10 = (signed char)-107;
unsigned char var_13 = (unsigned char)192;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-53;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
