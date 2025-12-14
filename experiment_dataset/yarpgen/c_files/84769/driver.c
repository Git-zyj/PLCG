#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)93;
long long int var_4 = -2019232536096493710LL;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-90;
int zero = 0;
short var_11 = (short)17972;
short var_12 = (short)27377;
unsigned long long int var_13 = 1808725922358626609ULL;
unsigned long long int var_14 = 817628203282220818ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
