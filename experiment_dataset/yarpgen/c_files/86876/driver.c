#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)4328;
_Bool var_7 = (_Bool)1;
_Bool var_11 = (_Bool)1;
signed char var_15 = (signed char)-45;
int zero = 0;
unsigned char var_16 = (unsigned char)158;
signed char var_17 = (signed char)119;
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
