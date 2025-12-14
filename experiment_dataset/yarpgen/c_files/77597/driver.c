#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22995;
short var_3 = (short)-16643;
unsigned long long int var_7 = 1106897316798280308ULL;
unsigned short var_8 = (unsigned short)48793;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-23622;
unsigned short var_13 = (unsigned short)40350;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
