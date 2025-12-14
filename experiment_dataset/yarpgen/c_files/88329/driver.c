#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)206;
unsigned int var_6 = 1874054786U;
int var_7 = -1044761040;
int var_11 = 266176438;
unsigned int var_13 = 3258911930U;
unsigned short var_14 = (unsigned short)5946;
int zero = 0;
int var_18 = 562089659;
short var_19 = (short)10747;
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
