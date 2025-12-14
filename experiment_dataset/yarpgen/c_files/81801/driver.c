#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)81;
unsigned char var_5 = (unsigned char)146;
int var_12 = 1369560537;
long long int var_13 = -6563443824148451354LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 2995239509U;
signed char var_18 = (signed char)24;
_Bool var_19 = (_Bool)0;
long long int var_20 = -1595075578207475959LL;
unsigned int var_21 = 2829072049U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
