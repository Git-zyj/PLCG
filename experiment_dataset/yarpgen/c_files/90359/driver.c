#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1613157750U;
unsigned long long int var_6 = 552663099303624268ULL;
short var_11 = (short)-7406;
long long int var_17 = 3841642419691546796LL;
unsigned long long int var_18 = 13451360687841371968ULL;
int zero = 0;
int var_19 = -1943560330;
long long int var_20 = -3486783250688746041LL;
void init() {
}

void checksum() {
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
