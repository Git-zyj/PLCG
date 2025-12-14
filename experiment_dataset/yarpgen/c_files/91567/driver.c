#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 15780238233291563936ULL;
short var_7 = (short)-9225;
unsigned long long int var_9 = 9032272329402492720ULL;
short var_10 = (short)2308;
unsigned char var_17 = (unsigned char)56;
int zero = 0;
int var_18 = -24894661;
short var_19 = (short)18342;
unsigned long long int var_20 = 10820722544194136768ULL;
unsigned int var_21 = 3263572022U;
void init() {
}

void checksum() {
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
