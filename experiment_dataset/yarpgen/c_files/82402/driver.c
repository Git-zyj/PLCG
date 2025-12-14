#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3534681754U;
unsigned int var_9 = 3721084997U;
unsigned short var_14 = (unsigned short)6536;
int zero = 0;
signed char var_15 = (signed char)-5;
signed char var_16 = (signed char)-123;
unsigned int var_17 = 3045707655U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
