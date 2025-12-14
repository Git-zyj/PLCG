#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 263304364U;
short var_4 = (short)2852;
signed char var_5 = (signed char)-10;
int var_6 = -1213840333;
unsigned char var_10 = (unsigned char)79;
_Bool var_14 = (_Bool)1;
long long int var_16 = -3548169449170116259LL;
short var_19 = (short)14223;
int zero = 0;
signed char var_20 = (signed char)-110;
int var_21 = -1782874127;
long long int var_22 = -197385250098942189LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
