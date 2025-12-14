#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_4 = 2806868735341848510LL;
long long int var_7 = -6557106489663657564LL;
_Bool var_10 = (_Bool)1;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned long long int var_17 = 3041521005913337974ULL;
int zero = 0;
signed char var_19 = (signed char)-27;
signed char var_20 = (signed char)-108;
unsigned long long int var_21 = 413408226086637308ULL;
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
