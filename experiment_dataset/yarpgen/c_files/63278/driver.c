#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2155007166U;
unsigned char var_1 = (unsigned char)58;
unsigned int var_2 = 297562772U;
unsigned short var_4 = (unsigned short)21850;
long long int var_6 = 6574281144778486318LL;
signed char var_7 = (signed char)76;
unsigned int var_11 = 3393407791U;
long long int var_12 = 733677236030658600LL;
int zero = 0;
long long int var_15 = -5810824953034608709LL;
short var_16 = (short)27833;
short var_17 = (short)15606;
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
