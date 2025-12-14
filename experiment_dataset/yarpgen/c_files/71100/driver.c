#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17433229012730316223ULL;
unsigned short var_6 = (unsigned short)42417;
unsigned int var_8 = 3810947755U;
int zero = 0;
unsigned int var_12 = 2425988059U;
signed char var_13 = (signed char)-42;
unsigned int var_14 = 3281356418U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
