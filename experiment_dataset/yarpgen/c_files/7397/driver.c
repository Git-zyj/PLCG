#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4094043021U;
unsigned int var_8 = 4038636075U;
unsigned char var_10 = (unsigned char)144;
unsigned char var_11 = (unsigned char)63;
short var_14 = (short)4977;
int zero = 0;
unsigned char var_16 = (unsigned char)35;
int var_17 = 1307929828;
unsigned int var_18 = 1177617768U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
