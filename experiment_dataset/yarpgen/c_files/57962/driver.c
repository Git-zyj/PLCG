#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21479;
short var_3 = (short)9741;
unsigned long long int var_9 = 380565299560669437ULL;
short var_12 = (short)-9925;
unsigned int var_14 = 1289625937U;
long long int var_15 = -5082648562152803798LL;
int zero = 0;
unsigned int var_17 = 2510625828U;
unsigned int var_18 = 2831956175U;
void init() {
}

void checksum() {
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
