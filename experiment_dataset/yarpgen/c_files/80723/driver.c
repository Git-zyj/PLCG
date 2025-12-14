#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 494333357U;
unsigned int var_11 = 4081277855U;
signed char var_15 = (signed char)-68;
int zero = 0;
unsigned short var_16 = (unsigned short)11068;
int var_17 = 2143638235;
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
