#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
long long int var_8 = -7606158381815649184LL;
signed char var_10 = (signed char)66;
signed char var_11 = (signed char)99;
unsigned long long int var_14 = 13150388439804601348ULL;
int var_15 = -667823040;
int zero = 0;
long long int var_19 = 2234858060001086925LL;
_Bool var_20 = (_Bool)0;
int var_21 = 1728317176;
void init() {
}

void checksum() {
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
