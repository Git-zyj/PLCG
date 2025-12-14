#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
short var_7 = (short)-10753;
signed char var_8 = (signed char)83;
unsigned char var_11 = (unsigned char)51;
unsigned short var_12 = (unsigned short)40133;
long long int var_14 = -5242818401094309767LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-113;
long long int var_21 = -7637582788112381884LL;
long long int var_22 = -3865710269434364478LL;
_Bool var_23 = (_Bool)1;
long long int var_24 = -8873462024193227673LL;
unsigned short var_25 = (unsigned short)2052;
long long int arr_0 [21] [21] ;
unsigned char arr_1 [21] ;
signed char arr_2 [21] ;
signed char arr_5 [10] ;
long long int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = -1575411858070903075LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -4427842542799300066LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
