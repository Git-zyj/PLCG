#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1514519777;
int var_2 = -2138509088;
signed char var_5 = (signed char)99;
unsigned int var_6 = 3448347381U;
_Bool var_8 = (_Bool)1;
int var_9 = -1175399014;
long long int var_11 = -2804669297484119523LL;
long long int var_12 = -168846801127910097LL;
long long int var_16 = 8120679503635298330LL;
unsigned char var_18 = (unsigned char)182;
int zero = 0;
signed char var_19 = (signed char)65;
unsigned char var_20 = (unsigned char)54;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-84;
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
