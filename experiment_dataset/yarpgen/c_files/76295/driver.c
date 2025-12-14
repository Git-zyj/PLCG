#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)80;
unsigned short var_1 = (unsigned short)17737;
unsigned short var_2 = (unsigned short)19556;
int var_4 = -117278140;
unsigned short var_7 = (unsigned short)22027;
unsigned char var_8 = (unsigned char)22;
unsigned short var_11 = (unsigned short)21686;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = -189246013;
unsigned int var_18 = 3966678470U;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-31;
int var_21 = 888329259;
long long int arr_3 [16] ;
int arr_7 [18] ;
short arr_8 [18] ;
int arr_12 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -8803549646667585253LL : -8688284258386324014LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 1719349379;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (short)-20753;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = 1762250285;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
