#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -151797077584975820LL;
_Bool var_2 = (_Bool)1;
long long int var_3 = -7618541255066727431LL;
unsigned int var_4 = 1794013898U;
unsigned short var_6 = (unsigned short)27814;
int var_7 = -330437;
unsigned short var_8 = (unsigned short)35143;
unsigned long long int var_9 = 4908463971187339972ULL;
unsigned short var_10 = (unsigned short)12;
_Bool var_11 = (_Bool)1;
unsigned char var_14 = (unsigned char)2;
short var_15 = (short)-8122;
int zero = 0;
long long int var_16 = -4474649065728314885LL;
long long int var_17 = -4866763563954720218LL;
unsigned int var_18 = 879889452U;
unsigned char var_19 = (unsigned char)162;
unsigned int var_20 = 3170366949U;
signed char var_21 = (signed char)-57;
unsigned long long int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 15887849166751521743ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
