#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-26766;
unsigned short var_3 = (unsigned short)37033;
unsigned short var_6 = (unsigned short)4255;
unsigned short var_15 = (unsigned short)1933;
int zero = 0;
short var_20 = (short)-30037;
unsigned int var_21 = 3998719985U;
void init() {
}

void checksum() {
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
