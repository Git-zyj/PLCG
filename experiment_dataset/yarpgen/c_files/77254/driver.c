#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)8004;
_Bool var_4 = (_Bool)1;
unsigned char var_9 = (unsigned char)90;
_Bool var_10 = (_Bool)1;
long long int var_11 = 593866735931755068LL;
_Bool var_13 = (_Bool)0;
unsigned char var_15 = (unsigned char)204;
short var_17 = (short)16494;
int zero = 0;
long long int var_18 = 1749642658597745664LL;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-24;
short var_21 = (short)-7958;
long long int var_22 = -2478624213853673429LL;
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
