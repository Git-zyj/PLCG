#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)164;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 1779109031U;
unsigned int var_12 = 4139725288U;
unsigned char var_13 = (unsigned char)215;
_Bool var_14 = (_Bool)1;
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
