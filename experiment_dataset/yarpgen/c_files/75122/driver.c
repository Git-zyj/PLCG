#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49463;
_Bool var_2 = (_Bool)0;
signed char var_7 = (signed char)124;
short var_12 = (short)30340;
signed char var_15 = (signed char)122;
int zero = 0;
unsigned char var_17 = (unsigned char)165;
int var_18 = -1905272111;
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
