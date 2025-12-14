#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 695101206;
short var_5 = (short)-19420;
unsigned short var_6 = (unsigned short)51556;
unsigned short var_8 = (unsigned short)44945;
unsigned int var_13 = 1175477475U;
unsigned int var_15 = 2825659205U;
unsigned char var_17 = (unsigned char)82;
int zero = 0;
unsigned int var_18 = 235498268U;
int var_19 = 1094665503;
long long int var_20 = -6573717335869888253LL;
void init() {
}

void checksum() {
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
