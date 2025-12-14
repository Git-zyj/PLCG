#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)59383;
long long int var_2 = 7736297952396916354LL;
int var_3 = -1419322853;
unsigned char var_4 = (unsigned char)184;
signed char var_8 = (signed char)56;
unsigned int var_9 = 630123232U;
unsigned int var_11 = 2719700575U;
long long int var_13 = -185178640319510444LL;
unsigned int var_17 = 2781722636U;
unsigned char var_19 = (unsigned char)59;
int zero = 0;
signed char var_20 = (signed char)77;
unsigned int var_21 = 1496088755U;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)244;
unsigned int var_24 = 2908591250U;
_Bool var_25 = (_Bool)1;
signed char var_26 = (signed char)111;
unsigned char var_27 = (unsigned char)251;
unsigned int arr_0 [15] ;
int arr_1 [15] ;
long long int arr_2 [15] ;
long long int arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1650912054U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 2047281498;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 8250553284822953932LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 5099231159545828461LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
