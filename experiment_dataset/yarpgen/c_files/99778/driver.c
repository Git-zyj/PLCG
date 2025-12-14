#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)131;
_Bool var_1 = (_Bool)1;
short var_2 = (short)-25760;
unsigned int var_4 = 3472901726U;
unsigned int var_5 = 1276684914U;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 3284041036462771729ULL;
long long int var_9 = -1309358385385516237LL;
long long int var_10 = 2158477917497074356LL;
unsigned char var_11 = (unsigned char)54;
_Bool var_12 = (_Bool)0;
unsigned int var_14 = 3395839903U;
unsigned short var_15 = (unsigned short)36921;
short var_18 = (short)7891;
int zero = 0;
signed char var_19 = (signed char)67;
int var_20 = 1358366217;
signed char var_21 = (signed char)49;
_Bool var_22 = (_Bool)1;
short var_23 = (short)-16999;
signed char var_24 = (signed char)35;
signed char var_25 = (signed char)25;
unsigned short arr_1 [14] ;
unsigned char arr_8 [15] [15] ;
int arr_9 [15] ;
unsigned long long int arr_3 [14] ;
long long int arr_7 [14] ;
short arr_10 [15] ;
unsigned int arr_11 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)19795;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = -762335792;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 7448043861270755260ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = -1979604184429602308LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (short)-4776;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = 910301537U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
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
