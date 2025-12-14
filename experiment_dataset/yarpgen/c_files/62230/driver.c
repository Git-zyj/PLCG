#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)142;
unsigned short var_2 = (unsigned short)7796;
short var_5 = (short)28041;
unsigned int var_13 = 289559481U;
unsigned long long int var_17 = 11511912266604640692ULL;
unsigned char var_18 = (unsigned char)192;
int zero = 0;
short var_20 = (short)-25811;
_Bool var_21 = (_Bool)0;
short var_22 = (short)29212;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
