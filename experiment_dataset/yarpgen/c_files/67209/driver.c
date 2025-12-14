#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)41341;
_Bool var_10 = (_Bool)1;
short var_17 = (short)12355;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = 1418558320;
unsigned long long int var_22 = 7314672405045765094ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
