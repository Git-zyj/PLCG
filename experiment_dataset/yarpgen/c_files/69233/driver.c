#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)140;
_Bool var_1 = (_Bool)0;
short var_2 = (short)230;
unsigned long long int var_5 = 3151782670165266877ULL;
signed char var_6 = (signed char)-81;
unsigned int var_7 = 999431031U;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)5;
int zero = 0;
unsigned char var_10 = (unsigned char)94;
int var_11 = -809018630;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
