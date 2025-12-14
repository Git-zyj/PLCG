#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1051654264188779632ULL;
signed char var_4 = (signed char)-101;
signed char var_6 = (signed char)-120;
unsigned int var_13 = 3279085074U;
short var_14 = (short)17330;
int zero = 0;
unsigned int var_16 = 4011790547U;
signed char var_17 = (signed char)15;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
