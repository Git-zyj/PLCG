#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26346;
unsigned short var_1 = (unsigned short)41461;
short var_2 = (short)-28995;
long long int var_3 = -4388173266718327506LL;
unsigned int var_4 = 4267748239U;
short var_5 = (short)19750;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)31477;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)39382;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3516168896U;
unsigned long long int var_13 = 12637868530390074948ULL;
int var_14 = 715372950;
signed char var_15 = (signed char)-69;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
