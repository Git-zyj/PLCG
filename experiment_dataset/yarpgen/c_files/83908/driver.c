#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)12735;
_Bool var_5 = (_Bool)1;
unsigned int var_8 = 117154078U;
short var_10 = (short)3470;
long long int var_11 = 2449011548570936597LL;
int zero = 0;
long long int var_19 = -4964007845133644767LL;
unsigned short var_20 = (unsigned short)30559;
int var_21 = -1961664632;
signed char var_22 = (signed char)-83;
short var_23 = (short)20378;
int arr_0 [22] ;
unsigned char arr_2 [22] ;
signed char arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -1652907177;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (signed char)48;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
