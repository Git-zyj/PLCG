#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 3059702615425241822LL;
short var_8 = (short)10197;
unsigned long long int var_9 = 14904843941660240957ULL;
unsigned int var_10 = 1868193652U;
short var_12 = (short)31323;
_Bool var_16 = (_Bool)1;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -1067992674;
void init() {
}

void checksum() {
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
