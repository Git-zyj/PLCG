#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 62444941U;
signed char var_4 = (signed char)57;
unsigned long long int var_6 = 8873118274676913198ULL;
int zero = 0;
short var_20 = (short)28837;
unsigned long long int var_21 = 13140904539280158845ULL;
signed char var_22 = (signed char)-125;
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
