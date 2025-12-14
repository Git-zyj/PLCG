#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 2569341783U;
signed char var_2 = (signed char)-109;
signed char var_5 = (signed char)-97;
int var_6 = 514717876;
unsigned int var_7 = 718003281U;
unsigned char var_8 = (unsigned char)244;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)25;
unsigned char var_13 = (unsigned char)16;
unsigned int var_14 = 4290699328U;
int zero = 0;
unsigned long long int var_15 = 6968055926884585034ULL;
short var_16 = (short)-3814;
long long int var_17 = -8953348547123846338LL;
unsigned int var_18 = 3874575379U;
unsigned char var_19 = (unsigned char)108;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
