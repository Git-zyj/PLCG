#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3083009611U;
unsigned short var_5 = (unsigned short)11652;
signed char var_7 = (signed char)-105;
signed char var_9 = (signed char)-19;
unsigned int var_10 = 2673386518U;
int zero = 0;
unsigned int var_13 = 4080009462U;
unsigned short var_14 = (unsigned short)22489;
void init() {
}

void checksum() {
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
