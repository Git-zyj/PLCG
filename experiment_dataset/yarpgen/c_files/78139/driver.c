#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 102423165;
_Bool var_4 = (_Bool)1;
unsigned short var_8 = (unsigned short)14315;
signed char var_9 = (signed char)73;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)7084;
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
