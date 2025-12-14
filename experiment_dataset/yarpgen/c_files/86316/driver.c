#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1699527204U;
short var_6 = (short)18353;
unsigned long long int var_11 = 15281824681235877932ULL;
short var_13 = (short)-20960;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_17 = 1509900277;
unsigned int var_18 = 289844658U;
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
