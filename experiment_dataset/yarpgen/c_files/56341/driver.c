#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-42;
unsigned int var_9 = 1036452825U;
unsigned short var_13 = (unsigned short)2063;
signed char var_15 = (signed char)125;
unsigned short var_18 = (unsigned short)958;
int zero = 0;
signed char var_20 = (signed char)-54;
unsigned long long int var_21 = 8114892709209501223ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
