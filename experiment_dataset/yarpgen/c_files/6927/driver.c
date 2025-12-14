#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_7 = (signed char)78;
unsigned char var_8 = (unsigned char)123;
unsigned char var_9 = (unsigned char)36;
int zero = 0;
unsigned int var_10 = 3563280717U;
unsigned char var_11 = (unsigned char)200;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
