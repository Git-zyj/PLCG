#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)26160;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
int zero = 0;
short var_12 = (short)14852;
unsigned int var_13 = 3400698598U;
unsigned short var_14 = (unsigned short)2484;
void init() {
}

void checksum() {
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
