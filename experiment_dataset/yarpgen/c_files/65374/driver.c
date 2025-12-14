#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1158;
signed char var_6 = (signed char)-19;
short var_9 = (short)-20916;
int var_16 = -933393844;
int zero = 0;
unsigned char var_18 = (unsigned char)215;
short var_19 = (short)-7501;
unsigned short var_20 = (unsigned short)45551;
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
