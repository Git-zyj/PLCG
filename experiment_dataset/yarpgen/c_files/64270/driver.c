#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4179211649U;
short var_9 = (short)22412;
unsigned char var_13 = (unsigned char)132;
int zero = 0;
signed char var_14 = (signed char)6;
unsigned short var_15 = (unsigned short)8639;
int var_16 = 439460124;
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
