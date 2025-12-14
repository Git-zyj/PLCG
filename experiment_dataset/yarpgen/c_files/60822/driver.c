#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3984273393U;
short var_1 = (short)3845;
signed char var_2 = (signed char)-74;
long long int var_3 = 1940634860145923277LL;
long long int var_4 = -5835216891889295342LL;
signed char var_5 = (signed char)48;
unsigned char var_11 = (unsigned char)112;
unsigned int var_15 = 250326925U;
unsigned long long int var_16 = 21639230638255731ULL;
long long int var_17 = -6832118193504440459LL;
signed char var_18 = (signed char)4;
signed char var_19 = (signed char)-116;
int zero = 0;
unsigned int var_20 = 4264337569U;
unsigned char var_21 = (unsigned char)131;
int var_22 = -945233075;
int var_23 = -734078967;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)1;
unsigned char var_26 = (unsigned char)8;
int var_27 = 1722735422;
unsigned long long int var_28 = 2238591270029862319ULL;
_Bool var_29 = (_Bool)0;
unsigned int arr_2 [15] ;
_Bool arr_5 [15] [15] [15] ;
signed char arr_7 [21] ;
short arr_8 [21] ;
short arr_9 [21] [21] ;
signed char arr_6 [15] ;
unsigned char arr_10 [21] ;
unsigned short arr_11 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 3105503164U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (signed char)55;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (short)-13261;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-17372;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (signed char)49;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)25334;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
