#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 924822088U;
unsigned char var_5 = (unsigned char)102;
int var_6 = -176831584;
long long int var_7 = 1727806800347148880LL;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)154;
unsigned long long int var_12 = 11471034702572315180ULL;
int zero = 0;
unsigned int var_13 = 1575952052U;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
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
