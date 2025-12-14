#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 341492983U;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)25822;
signed char var_4 = (signed char)127;
short var_6 = (short)-13065;
int zero = 0;
short var_10 = (short)25936;
_Bool var_11 = (_Bool)1;
int var_12 = -975682491;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
