#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-25733;
short var_3 = (short)-16070;
unsigned int var_5 = 4157934926U;
signed char var_11 = (signed char)-29;
unsigned short var_15 = (unsigned short)39769;
int zero = 0;
unsigned int var_16 = 3024045069U;
unsigned int var_17 = 996491137U;
void init() {
}

void checksum() {
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
