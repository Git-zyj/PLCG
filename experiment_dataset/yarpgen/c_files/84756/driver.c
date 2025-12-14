#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 525891739;
short var_9 = (short)-6741;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 9000801739480690263ULL;
unsigned int var_15 = 1857076829U;
int var_16 = 823683559;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
