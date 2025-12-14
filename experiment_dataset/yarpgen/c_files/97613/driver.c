#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-16411;
short var_5 = (short)27045;
short var_7 = (short)24185;
short var_11 = (short)18201;
short var_14 = (short)-17088;
int zero = 0;
short var_15 = (short)-2427;
short var_16 = (short)-32135;
short var_17 = (short)20192;
short var_18 = (short)18498;
short var_19 = (short)29598;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
