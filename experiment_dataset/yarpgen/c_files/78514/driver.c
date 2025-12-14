#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6644;
unsigned int var_2 = 685790815U;
short var_5 = (short)22896;
unsigned char var_12 = (unsigned char)40;
int zero = 0;
unsigned short var_14 = (unsigned short)36795;
int var_15 = 713177801;
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
