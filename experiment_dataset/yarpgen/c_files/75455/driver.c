#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_8 = (signed char)-115;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_18 = -7564365467494199318LL;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)24;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
