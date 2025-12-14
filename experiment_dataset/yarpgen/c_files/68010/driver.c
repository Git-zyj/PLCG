#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11259298428383771869ULL;
long long int var_5 = -8564989069318605864LL;
_Bool var_6 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 1679313658577094750ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
