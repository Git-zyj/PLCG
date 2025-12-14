#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_4 = (signed char)28;
unsigned char var_6 = (unsigned char)190;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 1412202390U;
short var_12 = (short)-28714;
signed char var_13 = (signed char)17;
short var_14 = (short)15951;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
