#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned char var_6 = (unsigned char)128;
unsigned long long int var_9 = 5387418223763669973ULL;
unsigned long long int var_11 = 15592200696048234553ULL;
_Bool var_13 = (_Bool)1;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 1077706713484351438ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)72;
unsigned long long int var_19 = 1731818653840495337ULL;
unsigned long long int var_20 = 1453006766564196981ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
