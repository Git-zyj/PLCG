#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)14;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)241;
unsigned int var_11 = 241851689U;
signed char var_14 = (signed char)28;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 13611435477472195052ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
