#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 111920724841965635LL;
unsigned char var_2 = (unsigned char)36;
unsigned char var_5 = (unsigned char)239;
unsigned long long int var_9 = 994846302930128307ULL;
signed char var_10 = (signed char)40;
long long int var_11 = -2708444444785380709LL;
int zero = 0;
unsigned short var_12 = (unsigned short)5323;
unsigned long long int var_13 = 6275300200821173684ULL;
unsigned char var_14 = (unsigned char)158;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
