#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33940;
unsigned int var_1 = 725723215U;
unsigned long long int var_3 = 3288810983804842948ULL;
unsigned short var_12 = (unsigned short)27768;
unsigned short var_13 = (unsigned short)36142;
unsigned short var_14 = (unsigned short)16599;
int zero = 0;
signed char var_16 = (signed char)-2;
unsigned int var_17 = 3745212524U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
