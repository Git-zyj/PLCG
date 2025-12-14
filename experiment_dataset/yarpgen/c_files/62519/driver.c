#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-40;
short var_2 = (short)-16288;
unsigned int var_5 = 1660362309U;
int var_10 = -1288517997;
unsigned int var_12 = 2964968628U;
int zero = 0;
signed char var_19 = (signed char)30;
short var_20 = (short)-11892;
unsigned char var_21 = (unsigned char)223;
short var_22 = (short)3404;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
