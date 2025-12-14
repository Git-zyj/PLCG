#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)96;
unsigned short var_2 = (unsigned short)45754;
unsigned long long int var_4 = 1719416449678707520ULL;
unsigned long long int var_6 = 14646752046187266348ULL;
int var_8 = 1115985382;
unsigned int var_10 = 1902304059U;
unsigned int var_14 = 1987282339U;
int zero = 0;
unsigned long long int var_15 = 9331961277035851285ULL;
int var_16 = 1709339048;
int var_17 = 712000934;
short var_18 = (short)-29965;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
