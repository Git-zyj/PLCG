#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26198;
short var_2 = (short)18421;
signed char var_4 = (signed char)-25;
int var_9 = 178053504;
unsigned char var_11 = (unsigned char)112;
unsigned int var_12 = 943722413U;
unsigned int var_14 = 2408189507U;
int zero = 0;
unsigned long long int var_15 = 8991613001709500323ULL;
unsigned int var_16 = 3524681773U;
int var_17 = -414936751;
void init() {
}

void checksum() {
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
