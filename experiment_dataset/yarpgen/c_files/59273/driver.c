#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)35797;
_Bool var_6 = (_Bool)1;
short var_8 = (short)-30552;
unsigned int var_11 = 4222050473U;
int zero = 0;
unsigned long long int var_18 = 16708188862699441569ULL;
short var_19 = (short)3449;
unsigned int var_20 = 375183470U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
