#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2967685260U;
unsigned int var_3 = 4115909635U;
unsigned int var_11 = 3465825426U;
int zero = 0;
signed char var_20 = (signed char)29;
unsigned char var_21 = (unsigned char)177;
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
