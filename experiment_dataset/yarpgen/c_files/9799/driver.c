#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27552;
int var_3 = -2136447973;
unsigned long long int var_4 = 17586965097624342402ULL;
unsigned short var_10 = (unsigned short)23053;
int zero = 0;
short var_13 = (short)12322;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-98;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
