#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 1731541251U;
unsigned int var_3 = 1133057561U;
short var_5 = (short)-4834;
unsigned char var_6 = (unsigned char)4;
signed char var_7 = (signed char)-55;
unsigned int var_8 = 2736519063U;
int zero = 0;
long long int var_11 = -2538948889850769744LL;
unsigned short var_12 = (unsigned short)26784;
signed char var_13 = (signed char)-113;
long long int var_14 = 7822500989209871328LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
