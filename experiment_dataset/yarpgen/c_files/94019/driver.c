#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)243;
unsigned char var_2 = (unsigned char)152;
signed char var_5 = (signed char)73;
unsigned long long int var_6 = 6854953101638428097ULL;
int zero = 0;
unsigned long long int var_17 = 11782290262785774599ULL;
unsigned short var_18 = (unsigned short)38834;
int var_19 = -325541852;
_Bool var_20 = (_Bool)1;
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
