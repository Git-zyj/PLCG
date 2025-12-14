#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10897;
short var_2 = (short)-12531;
unsigned long long int var_3 = 8435408869205032651ULL;
unsigned long long int var_5 = 15489684150529564538ULL;
unsigned short var_6 = (unsigned short)43380;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
signed char var_11 = (signed char)25;
unsigned char var_12 = (unsigned char)188;
short var_13 = (short)11424;
long long int var_14 = 77443832741618217LL;
unsigned int var_17 = 376162448U;
short var_18 = (short)-3301;
int zero = 0;
unsigned short var_19 = (unsigned short)4467;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
short var_22 = (short)10809;
unsigned char var_23 = (unsigned char)46;
unsigned short var_24 = (unsigned short)25401;
_Bool arr_0 [14] [14] ;
_Bool arr_1 [14] ;
_Bool arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
