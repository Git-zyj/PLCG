#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-961;
int var_7 = 835960488;
unsigned int var_12 = 1140724143U;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_17 = -1132514568;
unsigned int var_18 = 2157827175U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
