#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2169893769U;
_Bool var_2 = (_Bool)1;
unsigned short var_5 = (unsigned short)28648;
int zero = 0;
short var_12 = (short)28229;
short var_13 = (short)-21436;
short var_14 = (short)-5779;
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
