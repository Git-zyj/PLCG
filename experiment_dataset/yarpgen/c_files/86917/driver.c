#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23729;
signed char var_2 = (signed char)34;
long long int var_5 = 8666576873557570711LL;
unsigned int var_6 = 185934633U;
unsigned short var_7 = (unsigned short)43784;
unsigned long long int var_8 = 8802742726877726928ULL;
int var_9 = -841272528;
unsigned char var_12 = (unsigned char)102;
int zero = 0;
unsigned short var_13 = (unsigned short)22260;
unsigned int var_14 = 1300089353U;
int var_15 = -2090897664;
signed char var_16 = (signed char)-52;
long long int var_17 = -6630747782995087404LL;
long long int var_18 = -3982772802717349990LL;
int var_19 = -1658827525;
short var_20 = (short)-6603;
long long int var_21 = -1213709184742051410LL;
unsigned int var_22 = 1055392826U;
short var_23 = (short)16990;
signed char var_24 = (signed char)-39;
int var_25 = 299205252;
long long int arr_3 [18] ;
signed char arr_4 [18] [18] ;
long long int arr_9 [15] ;
long long int arr_19 [21] ;
unsigned char arr_5 [18] ;
int arr_10 [15] [15] ;
_Bool arr_11 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = -1758548061934731289LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = -3714125659579920093LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? -1293838664729821887LL : 1635066297626181184LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = -1839201317;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
