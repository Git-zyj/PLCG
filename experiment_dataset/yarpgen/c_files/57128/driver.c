#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-41;
signed char var_2 = (signed char)64;
unsigned short var_3 = (unsigned short)51673;
int var_10 = 913662561;
int zero = 0;
unsigned char var_16 = (unsigned char)135;
int var_17 = 1273434818;
short var_18 = (short)-12915;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
