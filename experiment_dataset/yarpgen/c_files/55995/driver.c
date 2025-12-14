#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)2449;
long long int var_13 = 4983357243841173162LL;
unsigned short var_14 = (unsigned short)62549;
int zero = 0;
long long int var_15 = 5083307248002273381LL;
unsigned int var_16 = 2595795603U;
unsigned char var_17 = (unsigned char)101;
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
