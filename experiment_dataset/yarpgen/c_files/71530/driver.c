#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3968547213U;
signed char var_5 = (signed char)100;
long long int var_6 = 3047795447863679611LL;
long long int var_14 = -6394649707452506525LL;
int zero = 0;
short var_15 = (short)30612;
short var_16 = (short)-27989;
signed char var_17 = (signed char)106;
short var_18 = (short)-15742;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
