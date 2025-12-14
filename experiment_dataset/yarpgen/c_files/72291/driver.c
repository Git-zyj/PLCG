#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3088270025U;
int var_4 = 862239996;
long long int var_6 = 1538576605967795519LL;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)157;
unsigned char var_12 = (unsigned char)5;
short var_14 = (short)13262;
int var_16 = -917369884;
int zero = 0;
long long int var_18 = -6803118748079227198LL;
long long int var_19 = 7504597695634219301LL;
void init() {
}

void checksum() {
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
