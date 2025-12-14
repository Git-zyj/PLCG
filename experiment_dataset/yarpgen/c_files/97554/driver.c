#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1892151260;
short var_5 = (short)-734;
long long int var_7 = 6900618074364484044LL;
short var_8 = (short)-18094;
long long int var_10 = -7064552802791768176LL;
unsigned char var_12 = (unsigned char)115;
signed char var_15 = (signed char)-99;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_19 = 2698105063090433564LL;
int var_20 = 843745663;
int var_21 = 1041170894;
_Bool var_22 = (_Bool)0;
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
