#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1557270851U;
unsigned char var_3 = (unsigned char)37;
signed char var_5 = (signed char)-91;
signed char var_7 = (signed char)-71;
unsigned short var_8 = (unsigned short)63915;
unsigned char var_10 = (unsigned char)221;
int zero = 0;
unsigned long long int var_13 = 2571907106359289297ULL;
unsigned int var_14 = 3325626526U;
void init() {
}

void checksum() {
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
