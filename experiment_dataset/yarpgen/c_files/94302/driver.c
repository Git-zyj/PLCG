#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1382600454;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 3589182206343130335ULL;
short var_16 = (short)-26711;
signed char var_17 = (signed char)30;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 8636774989612890090ULL;
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
