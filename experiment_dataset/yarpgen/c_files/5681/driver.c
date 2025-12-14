#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)77;
unsigned int var_4 = 319950204U;
unsigned long long int var_8 = 8981383664878836137ULL;
int zero = 0;
int var_10 = -350696186;
short var_11 = (short)29074;
unsigned char var_12 = (unsigned char)27;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
