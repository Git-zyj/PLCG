#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3414227410U;
signed char var_5 = (signed char)47;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 4057992567U;
unsigned int var_10 = 565824266U;
int zero = 0;
unsigned short var_11 = (unsigned short)33130;
unsigned short var_12 = (unsigned short)2154;
int var_13 = -48931349;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
