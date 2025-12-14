#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-1925;
unsigned int var_4 = 2501636588U;
short var_11 = (short)-1067;
int zero = 0;
unsigned long long int var_19 = 8785824701247120547ULL;
short var_20 = (short)3729;
unsigned long long int var_21 = 14558568920664895224ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
