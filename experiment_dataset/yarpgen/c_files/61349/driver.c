#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 123813096;
unsigned char var_3 = (unsigned char)19;
signed char var_5 = (signed char)-33;
signed char var_12 = (signed char)-126;
_Bool var_17 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)93;
int var_19 = 1348680347;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
