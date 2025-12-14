#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
long long int var_4 = -4305792605141001884LL;
signed char var_7 = (signed char)-71;
_Bool var_12 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)63;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
