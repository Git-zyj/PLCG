#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15943113756775876633ULL;
int var_5 = -229556847;
long long int var_8 = 6467490144564866418LL;
int zero = 0;
short var_11 = (short)-21076;
signed char var_12 = (signed char)95;
long long int var_13 = 8482324050906365959LL;
signed char var_14 = (signed char)60;
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
