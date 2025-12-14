#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 3689999139U;
int var_3 = -1475787296;
unsigned long long int var_5 = 12494002584328399390ULL;
int zero = 0;
short var_10 = (short)-9383;
unsigned short var_11 = (unsigned short)7605;
signed char var_12 = (signed char)88;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
