#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -597564465;
long long int var_2 = 7295721008187754251LL;
signed char var_4 = (signed char)(-127 - 1);
short var_5 = (short)-18005;
unsigned short var_7 = (unsigned short)27850;
unsigned long long int var_8 = 4819468250795272293ULL;
long long int var_11 = 2288641986530654895LL;
int zero = 0;
long long int var_12 = 7801807289749133855LL;
unsigned long long int var_13 = 3172991429581125788ULL;
short var_14 = (short)10042;
signed char var_15 = (signed char)120;
unsigned int var_16 = 2946096235U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
