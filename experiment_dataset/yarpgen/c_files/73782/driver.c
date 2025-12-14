#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)81;
unsigned int var_10 = 2203249194U;
unsigned short var_11 = (unsigned short)43677;
unsigned char var_12 = (unsigned char)28;
short var_13 = (short)-18611;
int zero = 0;
unsigned short var_14 = (unsigned short)7994;
unsigned short var_15 = (unsigned short)56652;
unsigned short var_16 = (unsigned short)11669;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
