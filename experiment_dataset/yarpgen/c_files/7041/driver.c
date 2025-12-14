#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18153;
int var_3 = 848523966;
int var_7 = -483725341;
unsigned short var_12 = (unsigned short)36400;
_Bool var_14 = (_Bool)1;
unsigned short var_16 = (unsigned short)39078;
unsigned char var_17 = (unsigned char)198;
int zero = 0;
unsigned int var_18 = 1705870552U;
int var_19 = -1297993791;
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
