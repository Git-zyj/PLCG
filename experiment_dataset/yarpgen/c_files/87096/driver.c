#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 14828108562491006318ULL;
unsigned short var_6 = (unsigned short)34531;
unsigned char var_12 = (unsigned char)118;
int zero = 0;
signed char var_18 = (signed char)122;
int var_19 = 1707660008;
unsigned short var_20 = (unsigned short)12150;
void init() {
}

void checksum() {
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
