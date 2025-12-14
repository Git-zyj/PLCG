#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -250386722;
_Bool var_5 = (_Bool)1;
int var_11 = -1704351566;
int var_14 = 1705185081;
unsigned long long int var_15 = 2209910164028593678ULL;
int zero = 0;
unsigned int var_16 = 1699233587U;
unsigned char var_17 = (unsigned char)2;
long long int var_18 = 4241515809780230413LL;
signed char var_19 = (signed char)-102;
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
