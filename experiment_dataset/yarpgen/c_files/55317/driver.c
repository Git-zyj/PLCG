#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13020579272773694039ULL;
unsigned long long int var_3 = 10259766500586484324ULL;
short var_6 = (short)-22153;
int zero = 0;
unsigned short var_10 = (unsigned short)59438;
unsigned short var_11 = (unsigned short)3561;
unsigned long long int var_12 = 8781760868975898032ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
