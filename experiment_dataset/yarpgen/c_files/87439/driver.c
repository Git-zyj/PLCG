#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43218;
short var_3 = (short)-9580;
short var_8 = (short)20575;
unsigned long long int var_10 = 8019136813160933461ULL;
int zero = 0;
signed char var_13 = (signed char)-40;
short var_14 = (short)-3503;
short var_15 = (short)-25878;
void init() {
}

void checksum() {
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
