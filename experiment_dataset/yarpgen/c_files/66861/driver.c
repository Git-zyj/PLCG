#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 670521824;
unsigned char var_2 = (unsigned char)79;
signed char var_4 = (signed char)89;
_Bool var_5 = (_Bool)0;
int var_6 = -1839214064;
unsigned char var_9 = (unsigned char)132;
int var_10 = -406745866;
signed char var_13 = (signed char)50;
unsigned long long int var_14 = 1784853940053226966ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)49;
long long int var_17 = -2562725805277442904LL;
unsigned long long int var_18 = 5169570462586126620ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
