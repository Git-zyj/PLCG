#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)201;
unsigned char var_5 = (unsigned char)69;
unsigned char var_6 = (unsigned char)203;
long long int var_7 = -5120789092160898415LL;
int zero = 0;
long long int var_16 = -3442584862325341230LL;
unsigned char var_17 = (unsigned char)232;
unsigned int var_18 = 165521986U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
