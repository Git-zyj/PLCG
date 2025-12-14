#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2131209386;
unsigned int var_2 = 2881578718U;
signed char var_3 = (signed char)86;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)114;
short var_6 = (short)18450;
int var_8 = 1313198023;
long long int var_9 = -688768500321028792LL;
unsigned int var_11 = 2103410086U;
int var_14 = -253788760;
unsigned long long int var_15 = 1670893516765796135ULL;
int zero = 0;
unsigned int var_18 = 1229721747U;
unsigned short var_19 = (unsigned short)53101;
short var_20 = (short)21872;
unsigned int var_21 = 155687217U;
unsigned char var_22 = (unsigned char)229;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
