#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)134;
signed char var_1 = (signed char)42;
unsigned char var_3 = (unsigned char)173;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-650;
int var_6 = -194010647;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 7510602807188548569ULL;
long long int var_12 = 6436498452311032334LL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 5278507007729473953ULL;
long long int var_17 = -7757078532285064410LL;
unsigned short var_18 = (unsigned short)48034;
int zero = 0;
short var_19 = (short)12543;
short var_20 = (short)23668;
signed char var_21 = (signed char)-77;
unsigned int var_22 = 2034871498U;
void init() {
}

void checksum() {
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
