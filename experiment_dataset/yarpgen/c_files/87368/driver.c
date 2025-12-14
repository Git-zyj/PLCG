#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)-94;
signed char var_3 = (signed char)69;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)162;
int var_12 = 906857826;
unsigned char var_14 = (unsigned char)215;
int zero = 0;
int var_18 = 1837164873;
unsigned short var_19 = (unsigned short)1140;
unsigned short var_20 = (unsigned short)65094;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)38;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
