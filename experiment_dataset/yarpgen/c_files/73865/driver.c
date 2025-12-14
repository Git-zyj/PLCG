#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)728;
unsigned short var_3 = (unsigned short)5237;
int var_7 = 228122762;
unsigned char var_8 = (unsigned char)146;
short var_9 = (short)18612;
signed char var_10 = (signed char)116;
unsigned short var_13 = (unsigned short)45975;
int zero = 0;
unsigned int var_14 = 1085250685U;
unsigned short var_15 = (unsigned short)16305;
short var_16 = (short)-23513;
unsigned short var_17 = (unsigned short)33049;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
