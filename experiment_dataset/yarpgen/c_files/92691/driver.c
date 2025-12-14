#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1596117501;
signed char var_9 = (signed char)82;
unsigned long long int var_10 = 14209094600807468874ULL;
unsigned long long int var_12 = 874198306656430237ULL;
unsigned short var_14 = (unsigned short)10494;
unsigned int var_15 = 3904522124U;
int zero = 0;
unsigned long long int var_17 = 7846801978833872198ULL;
unsigned long long int var_18 = 6680529870748434365ULL;
short var_19 = (short)16283;
int var_20 = 1410799519;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
