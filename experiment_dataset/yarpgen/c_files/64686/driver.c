#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3408772961261007143LL;
short var_3 = (short)-18270;
unsigned int var_6 = 1145992846U;
unsigned int var_12 = 4134499808U;
short var_13 = (short)24958;
unsigned long long int var_18 = 15004235770077664168ULL;
int zero = 0;
unsigned int var_20 = 3129332956U;
unsigned int var_21 = 81537529U;
short var_22 = (short)-22645;
int var_23 = -1923965078;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
