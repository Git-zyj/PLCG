#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 398849051U;
unsigned char var_3 = (unsigned char)136;
signed char var_4 = (signed char)84;
unsigned int var_7 = 1897597838U;
unsigned char var_9 = (unsigned char)2;
unsigned int var_10 = 1160294728U;
signed char var_11 = (signed char)-77;
unsigned int var_16 = 2915639665U;
unsigned char var_17 = (unsigned char)1;
unsigned int var_18 = 1918943304U;
int zero = 0;
unsigned char var_19 = (unsigned char)201;
unsigned char var_20 = (unsigned char)2;
void init() {
}

void checksum() {
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
