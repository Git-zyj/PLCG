#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6644;
short var_2 = (short)-20433;
short var_5 = (short)3822;
unsigned long long int var_6 = 12494638745858517380ULL;
unsigned long long int var_7 = 15522137465946658433ULL;
unsigned char var_8 = (unsigned char)166;
int zero = 0;
unsigned int var_10 = 4162544152U;
unsigned int var_11 = 1791144513U;
unsigned long long int var_12 = 649372581138441731ULL;
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
