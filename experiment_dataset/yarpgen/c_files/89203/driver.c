#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11977091767043011516ULL;
unsigned char var_3 = (unsigned char)124;
short var_4 = (short)6880;
signed char var_5 = (signed char)-39;
int var_9 = 594996663;
short var_10 = (short)-1201;
int zero = 0;
signed char var_11 = (signed char)-124;
short var_12 = (short)-17747;
signed char var_13 = (signed char)3;
unsigned long long int var_14 = 11824095678271734844ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
