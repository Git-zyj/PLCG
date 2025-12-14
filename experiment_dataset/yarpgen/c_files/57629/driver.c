#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1033464293;
signed char var_8 = (signed char)88;
int var_10 = -647637834;
unsigned long long int var_13 = 1797723445595397743ULL;
signed char var_16 = (signed char)-46;
int zero = 0;
int var_17 = 1916710034;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
