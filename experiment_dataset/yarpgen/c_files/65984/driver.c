#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3564622862U;
unsigned long long int var_8 = 3061661226974379312ULL;
unsigned int var_9 = 2750836251U;
int var_11 = -1813587048;
unsigned char var_12 = (unsigned char)178;
unsigned char var_13 = (unsigned char)229;
int zero = 0;
unsigned short var_15 = (unsigned short)59721;
short var_16 = (short)1048;
void init() {
}

void checksum() {
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
