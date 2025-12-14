#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)14194;
int var_4 = 791233821;
unsigned short var_6 = (unsigned short)64519;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)26232;
unsigned short var_13 = (unsigned short)6361;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
