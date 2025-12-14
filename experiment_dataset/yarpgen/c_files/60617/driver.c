#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_9 = (short)-6240;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)249;
int zero = 0;
unsigned char var_19 = (unsigned char)23;
unsigned char var_20 = (unsigned char)242;
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
