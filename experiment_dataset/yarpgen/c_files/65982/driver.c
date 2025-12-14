#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 1003471271U;
int var_2 = 190523823;
long long int var_4 = 7650863215251746223LL;
short var_6 = (short)-17378;
unsigned char var_7 = (unsigned char)169;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
long long int var_11 = 7360350349063294350LL;
int zero = 0;
unsigned short var_12 = (unsigned short)30198;
unsigned short var_13 = (unsigned short)7860;
signed char var_14 = (signed char)106;
unsigned long long int var_15 = 14636007245251367486ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
