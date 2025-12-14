#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1226535544;
long long int var_2 = -2989065712500740432LL;
unsigned char var_5 = (unsigned char)63;
unsigned char var_7 = (unsigned char)28;
unsigned long long int var_11 = 15688313680007584350ULL;
unsigned char var_13 = (unsigned char)183;
int zero = 0;
long long int var_14 = 806407066353655865LL;
long long int var_15 = 4582105637906225889LL;
short var_16 = (short)10922;
_Bool var_17 = (_Bool)0;
int var_18 = 120504763;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
