#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9298030174747213449ULL;
short var_1 = (short)21986;
_Bool var_5 = (_Bool)1;
unsigned char var_9 = (unsigned char)11;
int zero = 0;
unsigned int var_10 = 903878937U;
int var_11 = -259008407;
unsigned int var_12 = 3243319936U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
