#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)183;
short var_5 = (short)-14342;
signed char var_7 = (signed char)-65;
unsigned long long int var_10 = 1710873074555668036ULL;
int zero = 0;
short var_13 = (short)-17745;
unsigned short var_14 = (unsigned short)9366;
unsigned short var_15 = (unsigned short)30853;
unsigned int var_16 = 3002590191U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
