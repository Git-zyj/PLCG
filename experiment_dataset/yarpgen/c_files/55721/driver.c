#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17407;
int var_1 = -570847302;
long long int var_4 = 4717835547718506554LL;
unsigned long long int var_5 = 1444173778279395793ULL;
short var_6 = (short)26631;
long long int var_9 = -4557239710093983474LL;
short var_10 = (short)-6968;
int zero = 0;
long long int var_14 = -7870104714812595084LL;
unsigned short var_15 = (unsigned short)537;
short var_16 = (short)20811;
int var_17 = 378828785;
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
