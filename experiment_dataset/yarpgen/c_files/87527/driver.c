#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6513892077635472909LL;
int var_1 = 678760040;
signed char var_2 = (signed char)41;
unsigned int var_6 = 4184556450U;
signed char var_8 = (signed char)40;
int zero = 0;
signed char var_12 = (signed char)71;
unsigned char var_13 = (unsigned char)67;
signed char var_14 = (signed char)-43;
signed char var_15 = (signed char)-61;
unsigned long long int var_16 = 15584274441336862411ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
