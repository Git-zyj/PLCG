#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)113;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)159;
int var_5 = -2115628178;
_Bool var_6 = (_Bool)0;
long long int var_7 = 5571743522556025214LL;
unsigned char var_8 = (unsigned char)82;
unsigned char var_9 = (unsigned char)203;
unsigned char var_11 = (unsigned char)150;
long long int var_12 = -8044279310313213307LL;
long long int var_13 = -192639700392799797LL;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)244;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2988257352U;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 1077220410U;
_Bool var_20 = (_Bool)1;
int var_21 = 916751226;
unsigned char arr_0 [21] ;
long long int arr_1 [21] ;
unsigned char arr_2 [21] [21] ;
unsigned int arr_3 [21] ;
_Bool arr_4 [21] [21] ;
_Bool arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1553951655307304978LL : 8939026752250764851LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 8296907U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
