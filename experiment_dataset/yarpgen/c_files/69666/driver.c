#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)70;
_Bool var_7 = (_Bool)1;
long long int var_9 = -404752118469679350LL;
unsigned int var_13 = 3230711374U;
short var_14 = (short)-9839;
int var_16 = 1786223572;
int zero = 0;
unsigned long long int var_17 = 12013837189634249018ULL;
unsigned int var_18 = 1505217389U;
void init() {
}

void checksum() {
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
