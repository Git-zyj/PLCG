#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)54827;
unsigned char var_6 = (unsigned char)119;
int var_11 = 732377438;
unsigned int var_13 = 2809319852U;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_15 = -7635061158779768057LL;
long long int var_16 = -6131824115789816891LL;
unsigned int var_17 = 553649905U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
