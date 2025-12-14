#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)69;
short var_7 = (short)-27378;
unsigned short var_16 = (unsigned short)41741;
int zero = 0;
unsigned int var_18 = 264019812U;
unsigned int var_19 = 3445522192U;
signed char var_20 = (signed char)10;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
