#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2842496167865694349LL;
long long int var_3 = -2469517395275404886LL;
unsigned long long int var_4 = 12733248482733057594ULL;
signed char var_5 = (signed char)-93;
unsigned char var_6 = (unsigned char)146;
signed char var_8 = (signed char)36;
unsigned long long int var_10 = 14807335982961436483ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-108;
long long int var_14 = -5243028947636520719LL;
long long int var_15 = 2378743506323679077LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
