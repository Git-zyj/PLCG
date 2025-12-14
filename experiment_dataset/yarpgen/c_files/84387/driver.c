#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)60;
_Bool var_1 = (_Bool)1;
short var_4 = (short)-24014;
short var_5 = (short)1484;
unsigned int var_6 = 4107062032U;
int zero = 0;
signed char var_10 = (signed char)125;
unsigned int var_11 = 4273948045U;
unsigned char var_12 = (unsigned char)23;
signed char var_13 = (signed char)-40;
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
