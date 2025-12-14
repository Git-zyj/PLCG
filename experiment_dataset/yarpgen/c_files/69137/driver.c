#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1571027947;
_Bool var_3 = (_Bool)0;
short var_6 = (short)26492;
unsigned char var_11 = (unsigned char)8;
signed char var_12 = (signed char)65;
int zero = 0;
unsigned char var_14 = (unsigned char)212;
_Bool var_15 = (_Bool)1;
int var_16 = -104752004;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
