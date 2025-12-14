#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4646;
unsigned char var_3 = (unsigned char)21;
_Bool var_4 = (_Bool)1;
unsigned char var_11 = (unsigned char)84;
short var_12 = (short)20060;
int zero = 0;
unsigned short var_13 = (unsigned short)14473;
unsigned long long int var_14 = 9800934628268519492ULL;
void init() {
}

void checksum() {
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
