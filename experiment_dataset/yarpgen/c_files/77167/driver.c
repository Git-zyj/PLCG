#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1790907119;
short var_5 = (short)15091;
unsigned int var_8 = 2762768049U;
unsigned short var_10 = (unsigned short)11803;
unsigned int var_11 = 467390782U;
int zero = 0;
long long int var_15 = -4704828737214905958LL;
int var_16 = 1055240020;
_Bool var_17 = (_Bool)1;
int var_18 = -1942442360;
unsigned short var_19 = (unsigned short)36014;
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
