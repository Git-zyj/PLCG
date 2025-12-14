#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6843830471868999229LL;
unsigned char var_4 = (unsigned char)200;
unsigned long long int var_5 = 11467822960450491998ULL;
short var_6 = (short)17227;
unsigned short var_7 = (unsigned short)10823;
signed char var_12 = (signed char)59;
int zero = 0;
unsigned int var_13 = 2666124508U;
unsigned short var_14 = (unsigned short)12193;
unsigned char var_15 = (unsigned char)83;
long long int var_16 = -3122492850860161111LL;
long long int var_17 = 3397862997626698717LL;
_Bool var_18 = (_Bool)0;
long long int arr_0 [18] ;
unsigned char arr_2 [18] ;
unsigned char arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -7353219621659902616LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)251;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
