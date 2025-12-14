#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2000328765U;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 6361001243823559103ULL;
int zero = 0;
long long int var_11 = -2151606133867436216LL;
short var_12 = (short)-14666;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-115;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
