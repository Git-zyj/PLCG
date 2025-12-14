#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1008879907U;
long long int var_11 = 475912157475432797LL;
unsigned char var_13 = (unsigned char)211;
int var_15 = 1446370302;
int zero = 0;
int var_17 = 185610287;
long long int var_18 = -24960301286525191LL;
unsigned int var_19 = 1281731415U;
int var_20 = -1685806171;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
