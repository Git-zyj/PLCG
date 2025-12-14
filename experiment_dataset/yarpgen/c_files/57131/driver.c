#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 2454782691547991900ULL;
unsigned long long int var_8 = 12553929030000093555ULL;
unsigned long long int var_10 = 5600207793603682408ULL;
unsigned int var_11 = 3082564928U;
unsigned long long int var_12 = 11875606308374212101ULL;
unsigned short var_13 = (unsigned short)1514;
int zero = 0;
unsigned int var_14 = 3190763923U;
signed char var_15 = (signed char)4;
void init() {
}

void checksum() {
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
