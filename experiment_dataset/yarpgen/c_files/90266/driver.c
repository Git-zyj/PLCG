#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2527;
short var_4 = (short)-19711;
short var_6 = (short)-15324;
unsigned char var_7 = (unsigned char)187;
unsigned long long int var_8 = 1958553264971563468ULL;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 792794646U;
unsigned char var_13 = (unsigned char)58;
signed char var_14 = (signed char)107;
unsigned int var_15 = 2223036095U;
unsigned long long int var_19 = 12979141242410102636ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-92;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 4283139274U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
