#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = -937211021;
unsigned long long int var_14 = 1045998284814737551ULL;
unsigned char var_15 = (unsigned char)0;
int zero = 0;
short var_20 = (short)28623;
short var_21 = (short)-256;
short var_22 = (short)26332;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
