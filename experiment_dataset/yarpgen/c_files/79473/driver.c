#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)198;
unsigned char var_1 = (unsigned char)116;
unsigned int var_3 = 3388151399U;
unsigned short var_8 = (unsigned short)44769;
int var_9 = -1608501306;
int zero = 0;
signed char var_10 = (signed char)78;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)234;
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
