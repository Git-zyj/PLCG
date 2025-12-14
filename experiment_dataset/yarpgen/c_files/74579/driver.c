#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1224517173U;
unsigned int var_6 = 2825184586U;
signed char var_15 = (signed char)9;
int zero = 0;
long long int var_16 = 4958446643193391390LL;
signed char var_17 = (signed char)-100;
int var_18 = 409013196;
unsigned short var_19 = (unsigned short)13065;
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
