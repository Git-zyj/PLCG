#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)62941;
unsigned char var_4 = (unsigned char)38;
long long int var_6 = 3435853067383609599LL;
short var_10 = (short)-16632;
int zero = 0;
unsigned int var_12 = 519540800U;
signed char var_13 = (signed char)12;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
