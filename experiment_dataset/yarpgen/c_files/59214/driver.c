#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24892;
int var_2 = -1697562894;
short var_3 = (short)-15589;
signed char var_4 = (signed char)-54;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3524958154U;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned char var_11 = (unsigned char)134;
unsigned int var_12 = 401888232U;
signed char var_13 = (signed char)104;
short var_14 = (short)-22807;
void init() {
}

void checksum() {
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
