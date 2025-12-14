#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10105010675718450371ULL;
unsigned int var_2 = 1298607965U;
unsigned int var_5 = 2202246460U;
signed char var_6 = (signed char)111;
unsigned int var_10 = 980543283U;
unsigned int var_13 = 1313362213U;
_Bool var_14 = (_Bool)0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-13191;
int zero = 0;
unsigned char var_20 = (unsigned char)248;
unsigned char var_21 = (unsigned char)235;
short var_22 = (short)-11792;
unsigned long long int var_23 = 17935028765647811198ULL;
unsigned short var_24 = (unsigned short)44170;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
