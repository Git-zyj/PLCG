#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 574816003;
unsigned short var_2 = (unsigned short)57175;
unsigned int var_3 = 3358142561U;
unsigned int var_5 = 3946802890U;
unsigned char var_6 = (unsigned char)155;
int zero = 0;
unsigned int var_11 = 2708577307U;
signed char var_12 = (signed char)-102;
void init() {
}

void checksum() {
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
