#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)2645;
unsigned int var_7 = 2515509760U;
unsigned short var_9 = (unsigned short)2815;
unsigned char var_10 = (unsigned char)11;
int zero = 0;
unsigned short var_11 = (unsigned short)9172;
unsigned int var_12 = 89548276U;
unsigned short var_13 = (unsigned short)58740;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
