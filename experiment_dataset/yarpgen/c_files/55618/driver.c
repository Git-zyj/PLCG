#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -23499876545211238LL;
signed char var_8 = (signed char)-122;
signed char var_10 = (signed char)-99;
unsigned char var_13 = (unsigned char)80;
int zero = 0;
unsigned char var_19 = (unsigned char)41;
unsigned int var_20 = 3325637511U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
