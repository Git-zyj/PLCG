#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1875746976;
signed char var_11 = (signed char)57;
unsigned short var_14 = (unsigned short)53051;
int zero = 0;
signed char var_16 = (signed char)-125;
unsigned int var_17 = 1169509687U;
unsigned int var_18 = 239760774U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
