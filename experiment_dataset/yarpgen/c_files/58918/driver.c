#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3209667392U;
int var_3 = -51791966;
_Bool var_5 = (_Bool)1;
int var_7 = -1047093057;
long long int var_11 = -4743044427412854399LL;
unsigned int var_12 = 61055409U;
unsigned short var_13 = (unsigned short)58796;
int zero = 0;
signed char var_18 = (signed char)35;
long long int var_19 = 180847788646382063LL;
unsigned long long int var_20 = 4228985063756471800ULL;
void init() {
}

void checksum() {
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
