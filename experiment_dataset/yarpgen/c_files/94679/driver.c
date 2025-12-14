#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 16777257994091765489ULL;
unsigned short var_4 = (unsigned short)57901;
short var_7 = (short)3842;
unsigned long long int var_11 = 9754742067686599890ULL;
int zero = 0;
signed char var_12 = (signed char)-114;
short var_13 = (short)-2381;
unsigned int var_14 = 1871011584U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
