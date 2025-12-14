#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16654;
long long int var_5 = 4010546680692777877LL;
int var_7 = -91617565;
short var_8 = (short)32157;
int var_10 = -881403824;
unsigned int var_12 = 3904935642U;
long long int var_13 = -1108276838798884515LL;
long long int var_19 = -2181877295667637823LL;
int zero = 0;
int var_20 = -54752053;
short var_21 = (short)-3113;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 4052951929U;
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
