#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3835718218787379610ULL;
short var_2 = (short)-9412;
unsigned char var_4 = (unsigned char)96;
unsigned char var_6 = (unsigned char)151;
unsigned int var_10 = 1128029215U;
unsigned int var_11 = 4215302023U;
unsigned char var_14 = (unsigned char)135;
int zero = 0;
short var_16 = (short)8063;
unsigned long long int var_17 = 9884207918230553866ULL;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)58;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
