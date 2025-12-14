#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)164;
unsigned char var_3 = (unsigned char)140;
unsigned short var_4 = (unsigned short)42157;
_Bool var_7 = (_Bool)1;
unsigned int var_14 = 3205393604U;
short var_18 = (short)8451;
int zero = 0;
unsigned int var_19 = 1199197985U;
int var_20 = -1554654006;
signed char var_21 = (signed char)-126;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
