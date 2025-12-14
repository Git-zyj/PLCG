#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-121;
unsigned char var_12 = (unsigned char)23;
unsigned char var_14 = (unsigned char)56;
unsigned char var_16 = (unsigned char)72;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)44761;
unsigned char var_20 = (unsigned char)90;
unsigned int var_21 = 3035620395U;
unsigned int var_22 = 3745557688U;
unsigned int var_23 = 1136680503U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
