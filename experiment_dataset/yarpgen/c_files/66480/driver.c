#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)-102;
_Bool var_5 = (_Bool)0;
short var_9 = (short)4032;
short var_11 = (short)16263;
short var_14 = (short)32586;
long long int var_15 = -4182065732254111114LL;
short var_19 = (short)-12289;
int zero = 0;
unsigned int var_20 = 2666475363U;
unsigned long long int var_21 = 15482862676708637288ULL;
unsigned char var_22 = (unsigned char)145;
long long int var_23 = -5185366188500644573LL;
signed char arr_1 [23] ;
unsigned short arr_2 [23] [23] ;
short arr_3 [23] ;
unsigned long long int arr_5 [23] ;
_Bool arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)14479;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)11624;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 192824026882576204ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
