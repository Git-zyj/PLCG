#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)21141;
_Bool var_7 = (_Bool)1;
short var_10 = (short)-6182;
int var_11 = 18396760;
unsigned int var_13 = 3138932128U;
int zero = 0;
int var_16 = 1268364604;
unsigned short var_17 = (unsigned short)25627;
signed char var_18 = (signed char)122;
int var_19 = 639397148;
void init() {
}

void checksum() {
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
