#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3051619046U;
unsigned char var_1 = (unsigned char)98;
long long int var_2 = 2654574547808975543LL;
unsigned long long int var_3 = 9106276153914488695ULL;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)94;
signed char var_8 = (signed char)44;
short var_9 = (short)-5440;
int zero = 0;
short var_10 = (short)-22789;
signed char var_11 = (signed char)-83;
unsigned long long int var_12 = 10476903480915332910ULL;
signed char var_13 = (signed char)91;
_Bool var_14 = (_Bool)1;
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
