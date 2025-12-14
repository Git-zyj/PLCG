#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16416;
short var_1 = (short)18314;
signed char var_2 = (signed char)-97;
unsigned char var_3 = (unsigned char)54;
unsigned short var_9 = (unsigned short)10259;
int zero = 0;
unsigned long long int var_10 = 16352126159023794412ULL;
short var_11 = (short)28560;
short var_12 = (short)-31629;
unsigned short var_13 = (unsigned short)62746;
unsigned int var_14 = 1639681042U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
