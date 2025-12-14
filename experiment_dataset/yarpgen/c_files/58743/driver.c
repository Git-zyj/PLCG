#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 427580394U;
signed char var_7 = (signed char)44;
short var_10 = (short)16114;
unsigned short var_17 = (unsigned short)32401;
int zero = 0;
unsigned short var_18 = (unsigned short)51769;
unsigned int var_19 = 1385987745U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
