#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)1;
unsigned char var_4 = (unsigned char)80;
int var_6 = 1974653084;
int zero = 0;
short var_16 = (short)-7068;
int var_17 = -536334576;
unsigned char var_18 = (unsigned char)167;
int var_19 = 2048026587;
int var_20 = -1428694826;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
