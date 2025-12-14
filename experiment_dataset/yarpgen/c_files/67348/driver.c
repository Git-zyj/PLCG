#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)49;
_Bool var_3 = (_Bool)0;
long long int var_8 = -6056329370007287132LL;
_Bool var_10 = (_Bool)1;
int var_11 = 1534345833;
int zero = 0;
signed char var_14 = (signed char)11;
unsigned short var_15 = (unsigned short)45342;
void init() {
}

void checksum() {
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
