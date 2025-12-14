#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8009777134013699652ULL;
unsigned long long int var_3 = 16793357136295715717ULL;
long long int var_4 = 5037425274260935861LL;
unsigned short var_5 = (unsigned short)4617;
short var_6 = (short)25993;
int zero = 0;
short var_12 = (short)-16405;
unsigned int var_13 = 2622681976U;
unsigned char var_14 = (unsigned char)205;
unsigned short var_15 = (unsigned short)57016;
long long int var_16 = -942598806715023222LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
