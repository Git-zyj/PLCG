#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-47;
short var_11 = (short)-27334;
unsigned short var_13 = (unsigned short)43230;
signed char var_14 = (signed char)90;
unsigned int var_16 = 1643781651U;
signed char var_17 = (signed char)-30;
int zero = 0;
unsigned char var_19 = (unsigned char)250;
unsigned short var_20 = (unsigned short)49292;
unsigned long long int var_21 = 11113684864818403566ULL;
int var_22 = -1435092676;
unsigned int var_23 = 970750741U;
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
