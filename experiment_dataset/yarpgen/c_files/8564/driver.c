#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)29714;
int var_4 = -1047822678;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 8513609658198745987ULL;
unsigned int var_9 = 174642504U;
int var_10 = -848025205;
signed char var_11 = (signed char)-66;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = 1789572872;
signed char var_14 = (signed char)-78;
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
