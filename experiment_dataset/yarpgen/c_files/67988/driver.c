#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15051386667489643482ULL;
signed char var_4 = (signed char)-91;
signed char var_14 = (signed char)-5;
int zero = 0;
unsigned int var_20 = 3056782026U;
unsigned char var_21 = (unsigned char)240;
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
