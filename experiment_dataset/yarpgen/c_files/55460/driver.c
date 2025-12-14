#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 337147812059654037ULL;
long long int var_3 = -868538853838933531LL;
unsigned char var_4 = (unsigned char)40;
unsigned int var_5 = 626651998U;
signed char var_6 = (signed char)86;
long long int var_8 = -7471872047032670145LL;
long long int var_10 = 4955533519914323879LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)65;
unsigned int var_14 = 440526587U;
unsigned int var_15 = 4098508633U;
unsigned int var_16 = 245873006U;
unsigned int var_17 = 3429321897U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
