#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50530;
unsigned char var_11 = (unsigned char)131;
unsigned char var_12 = (unsigned char)47;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1469209440U;
unsigned char var_16 = (unsigned char)106;
void init() {
}

void checksum() {
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
