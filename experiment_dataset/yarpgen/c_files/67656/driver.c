#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 826059713U;
signed char var_2 = (signed char)81;
int var_5 = -1867396065;
int var_8 = -1456006726;
unsigned short var_10 = (unsigned short)60862;
unsigned long long int var_11 = 15738615742192729844ULL;
signed char var_13 = (signed char)126;
int zero = 0;
int var_14 = 1604941052;
int var_15 = -1723273137;
void init() {
}

void checksum() {
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
