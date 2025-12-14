#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 343069327;
int var_11 = 2033223932;
_Bool var_12 = (_Bool)1;
int var_13 = 187692796;
_Bool var_14 = (_Bool)1;
int var_15 = 926066128;
int var_16 = 430118412;
int zero = 0;
int var_18 = 1863344323;
int var_19 = -977189054;
_Bool var_20 = (_Bool)0;
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
