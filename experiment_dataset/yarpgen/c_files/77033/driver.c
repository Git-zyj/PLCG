#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7745;
unsigned int var_1 = 3743132647U;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)116;
unsigned int var_4 = 1627440151U;
unsigned short var_5 = (unsigned short)55804;
_Bool var_6 = (_Bool)0;
unsigned char var_11 = (unsigned char)28;
unsigned short var_13 = (unsigned short)17636;
unsigned short var_14 = (unsigned short)54941;
unsigned int var_15 = 2951213613U;
int zero = 0;
unsigned long long int var_18 = 7833647639943097298ULL;
_Bool var_19 = (_Bool)1;
long long int var_20 = 3440290776707730710LL;
unsigned long long int var_21 = 17590105054686335801ULL;
unsigned char arr_0 [12] ;
unsigned char arr_1 [12] ;
_Bool arr_3 [12] [12] ;
unsigned short arr_6 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)5735 : (unsigned short)53138;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
