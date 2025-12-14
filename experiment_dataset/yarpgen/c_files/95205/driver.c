#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 3862861285U;
short var_11 = (short)-28727;
signed char var_12 = (signed char)-66;
int zero = 0;
unsigned int var_14 = 3719120913U;
unsigned short var_15 = (unsigned short)50214;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
