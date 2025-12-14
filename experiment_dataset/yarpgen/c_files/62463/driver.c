#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1987827299;
unsigned int var_1 = 3748791990U;
_Bool var_2 = (_Bool)1;
long long int var_3 = 626618441130966324LL;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)48222;
unsigned char var_12 = (unsigned char)96;
long long int var_13 = -2047138544364809001LL;
_Bool var_14 = (_Bool)1;
int var_15 = -654098758;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 1787387843U;
unsigned int var_18 = 3518062526U;
unsigned short var_19 = (unsigned short)10333;
short var_20 = (short)-13776;
long long int var_21 = 4789401169621178487LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
