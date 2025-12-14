#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3381283603U;
short var_2 = (short)-32312;
long long int var_5 = -4525930172447390189LL;
int var_7 = 1520874663;
long long int var_9 = -2832910002701273184LL;
int var_11 = -1582202188;
unsigned int var_13 = 461375452U;
signed char var_14 = (signed char)-80;
int zero = 0;
unsigned long long int var_16 = 749209042556033246ULL;
short var_17 = (short)18700;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)107;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
