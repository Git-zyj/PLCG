#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1955328346U;
signed char var_7 = (signed char)-59;
int var_11 = -712137346;
int zero = 0;
unsigned short var_17 = (unsigned short)12315;
unsigned long long int var_18 = 12177386214718142771ULL;
void init() {
}

void checksum() {
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
