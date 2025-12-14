#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13382838384801405457ULL;
unsigned short var_1 = (unsigned short)42320;
int var_3 = 315289289;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned char var_10 = (unsigned char)167;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)21;
unsigned int var_13 = 3917176819U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
