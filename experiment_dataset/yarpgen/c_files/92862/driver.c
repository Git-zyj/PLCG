#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2453;
signed char var_6 = (signed char)-100;
long long int var_8 = -6734819398874903089LL;
int zero = 0;
unsigned long long int var_12 = 10794321574708479093ULL;
int var_13 = -360191901;
signed char var_14 = (signed char)-97;
long long int var_15 = -213687148651250545LL;
unsigned char var_16 = (unsigned char)116;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
