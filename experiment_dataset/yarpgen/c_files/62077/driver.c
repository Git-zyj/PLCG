#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)(-127 - 1);
unsigned short var_1 = (unsigned short)20812;
short var_2 = (short)-21085;
long long int var_4 = 4072055764402875552LL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 11535418804117373289ULL;
unsigned int var_8 = 277028358U;
unsigned int var_9 = 3958344368U;
unsigned long long int var_10 = 4603730647673330326ULL;
short var_11 = (short)-30901;
int zero = 0;
unsigned short var_12 = (unsigned short)58394;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
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
