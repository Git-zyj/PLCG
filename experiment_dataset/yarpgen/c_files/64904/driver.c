#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1136;
unsigned short var_1 = (unsigned short)62604;
short var_4 = (short)-17459;
short var_5 = (short)18983;
int var_6 = 870303351;
int var_7 = 243878579;
signed char var_8 = (signed char)-27;
int zero = 0;
unsigned long long int var_13 = 7125822556577921356ULL;
unsigned short var_14 = (unsigned short)4922;
int var_15 = -974744627;
unsigned short var_16 = (unsigned short)56065;
unsigned char var_17 = (unsigned char)49;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
