#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-15462;
signed char var_12 = (signed char)-103;
unsigned char var_15 = (unsigned char)30;
int zero = 0;
unsigned char var_20 = (unsigned char)91;
unsigned long long int var_21 = 8442644324201798512ULL;
unsigned long long int var_22 = 7578737589876250304ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
