#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)10;
unsigned short var_2 = (unsigned short)55045;
signed char var_3 = (signed char)-16;
unsigned int var_11 = 3892312453U;
int var_13 = 1269807393;
int var_16 = 1071965654;
int zero = 0;
unsigned short var_17 = (unsigned short)61260;
unsigned long long int var_18 = 1637587812797409474ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
