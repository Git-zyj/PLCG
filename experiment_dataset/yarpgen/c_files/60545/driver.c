#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 729665143716397679LL;
unsigned char var_2 = (unsigned char)173;
unsigned char var_3 = (unsigned char)99;
unsigned short var_5 = (unsigned short)58187;
signed char var_8 = (signed char)31;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-20850;
int var_12 = 377711142;
unsigned char var_13 = (unsigned char)141;
int zero = 0;
long long int var_14 = -5238743330525673819LL;
_Bool var_15 = (_Bool)0;
int var_16 = 182564288;
unsigned int var_17 = 709471698U;
unsigned short var_18 = (unsigned short)31626;
unsigned short arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)8242;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
