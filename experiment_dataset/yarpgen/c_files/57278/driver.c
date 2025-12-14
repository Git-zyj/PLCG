#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
_Bool var_7 = (_Bool)0;
short var_9 = (short)8029;
unsigned short var_11 = (unsigned short)1781;
_Bool var_12 = (_Bool)0;
short var_14 = (short)-3094;
signed char var_16 = (signed char)28;
int zero = 0;
unsigned short var_17 = (unsigned short)23019;
signed char var_18 = (signed char)-56;
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
