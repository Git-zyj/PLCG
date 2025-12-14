#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 3325647098U;
short var_3 = (short)3016;
unsigned short var_5 = (unsigned short)28602;
unsigned int var_12 = 2817707732U;
signed char var_15 = (signed char)-121;
unsigned short var_17 = (unsigned short)35818;
int zero = 0;
unsigned long long int var_18 = 7187255302192256647ULL;
unsigned char var_19 = (unsigned char)208;
signed char var_20 = (signed char)11;
long long int var_21 = -5250901979391764909LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
