#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7744158114911860394ULL;
long long int var_6 = -6935187963451496918LL;
int var_13 = -1164795298;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 27343527777109631ULL;
long long int var_20 = 1494786662553555106LL;
int var_21 = 1237488312;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
