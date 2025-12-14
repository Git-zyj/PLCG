#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28384;
unsigned short var_3 = (unsigned short)14257;
signed char var_4 = (signed char)-116;
unsigned short var_5 = (unsigned short)7624;
unsigned long long int var_9 = 6508037583214092619ULL;
int zero = 0;
unsigned long long int var_11 = 2512227556332377693ULL;
unsigned int var_12 = 85813997U;
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
