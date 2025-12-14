#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7241;
unsigned char var_2 = (unsigned char)21;
int var_5 = 2087700984;
short var_6 = (short)-17047;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 3096952379474969156ULL;
signed char var_10 = (signed char)40;
short var_11 = (short)-28580;
int zero = 0;
unsigned char var_12 = (unsigned char)98;
int var_13 = -193338259;
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
