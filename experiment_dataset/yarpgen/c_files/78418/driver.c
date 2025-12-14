#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)44;
short var_13 = (short)-21844;
unsigned short var_14 = (unsigned short)34329;
short var_15 = (short)2535;
int zero = 0;
unsigned long long int var_17 = 1124254736917943348ULL;
unsigned long long int var_18 = 5296047446341331367ULL;
int var_19 = 1534293976;
unsigned long long int var_20 = 1834164058560409456ULL;
unsigned char var_21 = (unsigned char)131;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
