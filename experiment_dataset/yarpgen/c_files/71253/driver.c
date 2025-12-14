#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8457525956384304655ULL;
unsigned char var_6 = (unsigned char)238;
short var_7 = (short)26906;
unsigned short var_11 = (unsigned short)6539;
int zero = 0;
unsigned int var_19 = 1965266447U;
unsigned int var_20 = 2449316605U;
unsigned short var_21 = (unsigned short)12529;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
