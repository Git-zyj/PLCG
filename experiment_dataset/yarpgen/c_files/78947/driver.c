#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3769410460977243216ULL;
short var_7 = (short)-24005;
int var_10 = -2101034338;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = 1766850115;
short var_14 = (short)-4023;
short var_15 = (short)112;
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
