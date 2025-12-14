#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5085305567721680217LL;
unsigned int var_5 = 581559321U;
unsigned int var_6 = 3413962836U;
unsigned char var_8 = (unsigned char)189;
unsigned int var_9 = 2371511237U;
_Bool var_11 = (_Bool)0;
unsigned long long int var_13 = 9510925191514997124ULL;
_Bool var_14 = (_Bool)1;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)23341;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)225;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
