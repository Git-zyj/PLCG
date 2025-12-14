#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)20;
unsigned long long int var_2 = 12722257025281317720ULL;
signed char var_3 = (signed char)43;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)0;
int var_7 = -1198154289;
unsigned char var_10 = (unsigned char)12;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_13 = (unsigned char)19;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)240;
unsigned char var_16 = (unsigned char)74;
int var_17 = 35226543;
unsigned int var_18 = 639816672U;
unsigned int var_19 = 1744948812U;
signed char var_20 = (signed char)21;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-28;
long long int arr_0 [18] ;
long long int arr_2 [18] ;
int arr_3 [18] ;
long long int arr_17 [19] ;
short arr_18 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -6725925861009690948LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 2232518730989249308LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 1903535411;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = 8382733257107173560LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = (short)5;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
