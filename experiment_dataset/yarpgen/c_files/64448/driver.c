#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)34986;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)0;
long long int var_11 = 255657816965150906LL;
unsigned int var_12 = 3552392815U;
int zero = 0;
short var_14 = (short)-23111;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
