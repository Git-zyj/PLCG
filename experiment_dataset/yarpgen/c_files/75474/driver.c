#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35984;
signed char var_2 = (signed char)-59;
unsigned int var_3 = 3692555893U;
signed char var_4 = (signed char)78;
unsigned long long int var_5 = 1858865156347859587ULL;
short var_6 = (short)6949;
unsigned short var_7 = (unsigned short)8230;
unsigned short var_8 = (unsigned short)51665;
int var_10 = -596301233;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)9403;
void init() {
}

void checksum() {
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
