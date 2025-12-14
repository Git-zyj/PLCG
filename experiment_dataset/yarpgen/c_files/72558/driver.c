#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2511777757119912295LL;
short var_5 = (short)21349;
unsigned short var_7 = (unsigned short)5106;
int var_8 = 2013223401;
signed char var_9 = (signed char)8;
unsigned int var_12 = 1640241554U;
unsigned int var_13 = 1680770195U;
int zero = 0;
int var_14 = -522002014;
unsigned char var_15 = (unsigned char)215;
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
