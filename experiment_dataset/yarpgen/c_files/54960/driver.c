#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)16911;
unsigned char var_5 = (unsigned char)214;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)-84;
unsigned long long int var_12 = 6038224690950521043ULL;
unsigned long long int var_13 = 10679017557322309638ULL;
int zero = 0;
long long int var_16 = 4489707205001313818LL;
unsigned int var_17 = 3805259482U;
signed char var_18 = (signed char)113;
_Bool var_19 = (_Bool)1;
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
