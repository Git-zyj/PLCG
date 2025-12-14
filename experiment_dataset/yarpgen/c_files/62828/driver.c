#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3482;
unsigned short var_1 = (unsigned short)50105;
short var_3 = (short)25067;
unsigned char var_5 = (unsigned char)250;
unsigned char var_6 = (unsigned char)23;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)127;
signed char var_9 = (signed char)-125;
unsigned short var_10 = (unsigned short)59943;
int zero = 0;
int var_11 = -669581339;
unsigned short var_12 = (unsigned short)35297;
long long int var_13 = -6931612132836483151LL;
unsigned int var_14 = 1042268766U;
int var_15 = 701957550;
unsigned char var_16 = (unsigned char)84;
signed char arr_4 [14] [14] ;
int arr_7 [14] [14] [14] ;
unsigned short arr_14 [18] ;
short arr_15 [18] ;
unsigned int arr_13 [14] ;
int arr_16 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 1788655167;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned short)38036 : (unsigned short)39504;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (short)-14449 : (short)27373;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = 2369877343U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? -1044854437 : -1750358634;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
