#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1433;
unsigned long long int var_3 = 2614293968078348132ULL;
_Bool var_5 = (_Bool)0;
short var_16 = (short)-26376;
int zero = 0;
unsigned int var_18 = 1958561393U;
int var_19 = -229756263;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
