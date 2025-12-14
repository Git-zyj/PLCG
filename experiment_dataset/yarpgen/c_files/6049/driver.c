#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 354017558;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)99;
unsigned short var_6 = (unsigned short)59172;
int zero = 0;
unsigned char var_10 = (unsigned char)203;
unsigned long long int var_11 = 2050776337888939807ULL;
int var_12 = -1823744515;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
