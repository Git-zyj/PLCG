#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)249;
unsigned char var_6 = (unsigned char)41;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_15 = (short)7143;
unsigned int var_16 = 3958175601U;
unsigned short var_17 = (unsigned short)19829;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
