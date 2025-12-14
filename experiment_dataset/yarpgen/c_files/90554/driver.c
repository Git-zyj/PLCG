#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1052118105U;
unsigned int var_1 = 2728640291U;
unsigned int var_3 = 1443994647U;
unsigned int var_5 = 3453084416U;
unsigned int var_7 = 2031383600U;
unsigned int var_10 = 471774511U;
unsigned int var_11 = 2612766374U;
unsigned int var_13 = 186656111U;
unsigned short var_14 = (unsigned short)39778;
int zero = 0;
unsigned short var_15 = (unsigned short)9820;
unsigned int var_16 = 1935415870U;
unsigned short var_17 = (unsigned short)5258;
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
