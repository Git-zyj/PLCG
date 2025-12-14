#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1693340250;
short var_12 = (short)24327;
unsigned short var_15 = (unsigned short)64440;
int zero = 0;
unsigned short var_16 = (unsigned short)15549;
signed char var_17 = (signed char)53;
signed char var_18 = (signed char)62;
int var_19 = 913223012;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
