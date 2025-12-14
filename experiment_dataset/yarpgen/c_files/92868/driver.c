#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)233;
int var_4 = -1123437616;
unsigned int var_6 = 1939580269U;
unsigned short var_15 = (unsigned short)55360;
int var_16 = 608018408;
int zero = 0;
unsigned int var_20 = 1453313082U;
unsigned char var_21 = (unsigned char)151;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
