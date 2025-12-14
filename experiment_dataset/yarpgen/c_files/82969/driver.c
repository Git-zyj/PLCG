#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1876746556097770883ULL;
_Bool var_4 = (_Bool)1;
signed char var_8 = (signed char)-46;
int zero = 0;
long long int var_10 = 8697669812019400778LL;
signed char var_11 = (signed char)-122;
int var_12 = 110015319;
int var_13 = 111759364;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
