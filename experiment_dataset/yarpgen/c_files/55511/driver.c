#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1821085653U;
int var_2 = -1488059899;
unsigned char var_3 = (unsigned char)34;
_Bool var_5 = (_Bool)1;
short var_7 = (short)-4773;
_Bool var_9 = (_Bool)0;
long long int var_14 = 8340094715535675609LL;
short var_17 = (short)11830;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 2752786841U;
long long int var_21 = 7578902219914957952LL;
long long int var_22 = 8968349047028358631LL;
signed char var_23 = (signed char)5;
unsigned char var_24 = (unsigned char)199;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
