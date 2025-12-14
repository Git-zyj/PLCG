#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)117;
unsigned char var_5 = (unsigned char)241;
signed char var_6 = (signed char)66;
long long int var_7 = 4993844402051588759LL;
int var_10 = -974969796;
unsigned int var_11 = 1550346878U;
signed char var_12 = (signed char)-115;
unsigned char var_14 = (unsigned char)1;
unsigned short var_15 = (unsigned short)49337;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)74;
unsigned long long int var_18 = 14979942800197394096ULL;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
