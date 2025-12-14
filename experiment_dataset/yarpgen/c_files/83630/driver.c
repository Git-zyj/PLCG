#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)52641;
_Bool var_15 = (_Bool)0;
unsigned char var_18 = (unsigned char)10;
int zero = 0;
signed char var_19 = (signed char)3;
long long int var_20 = 1451096703165136992LL;
long long int var_21 = 8377798166159850424LL;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)219;
unsigned char var_24 = (unsigned char)155;
unsigned int var_25 = 3380596649U;
int arr_1 [23] ;
unsigned int arr_2 [18] ;
unsigned long long int arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -1050953861;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 2377339982U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 13702707096668553600ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
