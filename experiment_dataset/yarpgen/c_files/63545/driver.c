#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)4145;
short var_3 = (short)-25527;
short var_5 = (short)-7508;
short var_7 = (short)-15283;
short var_8 = (short)1957;
int var_9 = -2037004884;
int zero = 0;
unsigned long long int var_11 = 2875654905298180795ULL;
long long int var_12 = 1094154438965592967LL;
unsigned int var_13 = 2885367345U;
unsigned long long int var_14 = 15523319358384222335ULL;
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
