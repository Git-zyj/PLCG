#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1667624827;
long long int var_10 = -703305380778312053LL;
int var_11 = -1183485038;
signed char var_12 = (signed char)-46;
int zero = 0;
unsigned long long int var_14 = 11705514416828137802ULL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 14562541761561944988ULL;
int var_17 = -1469953022;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
