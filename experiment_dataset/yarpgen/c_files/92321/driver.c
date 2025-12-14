#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
int var_5 = -2146888043;
short var_6 = (short)-14426;
unsigned int var_7 = 727160609U;
unsigned int var_8 = 3240457377U;
int zero = 0;
int var_13 = 936988070;
long long int var_14 = -8741354299510768037LL;
int var_15 = -1650470306;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
