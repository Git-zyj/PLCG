#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)1;
unsigned long long int var_3 = 14966333027451368288ULL;
long long int var_6 = 3907155854039651561LL;
int var_11 = 1384499779;
int zero = 0;
unsigned char var_14 = (unsigned char)150;
unsigned int var_15 = 3587249900U;
long long int var_16 = -7920280390534526382LL;
unsigned short var_17 = (unsigned short)32558;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
