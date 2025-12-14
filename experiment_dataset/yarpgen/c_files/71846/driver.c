#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3246115619U;
unsigned int var_4 = 2991534211U;
signed char var_6 = (signed char)-108;
unsigned char var_9 = (unsigned char)32;
int zero = 0;
long long int var_15 = 6300327395014488085LL;
unsigned int var_16 = 113018668U;
void init() {
}

void checksum() {
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
