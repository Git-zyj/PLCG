#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)36359;
short var_2 = (short)-3782;
unsigned short var_3 = (unsigned short)39346;
signed char var_4 = (signed char)98;
unsigned long long int var_7 = 9775546311498706061ULL;
signed char var_11 = (signed char)94;
unsigned char var_13 = (unsigned char)146;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-48;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
