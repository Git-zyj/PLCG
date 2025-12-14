#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)48;
unsigned long long int var_3 = 14829661842475145065ULL;
int var_4 = -196662580;
signed char var_6 = (signed char)-26;
long long int var_8 = -7337965620388613644LL;
signed char var_13 = (signed char)-67;
int zero = 0;
int var_14 = 1506011836;
unsigned char var_15 = (unsigned char)26;
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
