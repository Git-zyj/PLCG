#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)61;
unsigned int var_1 = 2644648199U;
int var_4 = -7811508;
unsigned char var_6 = (unsigned char)195;
unsigned short var_10 = (unsigned short)63438;
unsigned char var_11 = (unsigned char)221;
unsigned char var_13 = (unsigned char)224;
int zero = 0;
unsigned short var_17 = (unsigned short)12354;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
