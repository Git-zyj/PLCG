#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 2704312775017117503ULL;
short var_3 = (short)27245;
unsigned short var_4 = (unsigned short)50133;
unsigned int var_11 = 3636725982U;
unsigned char var_13 = (unsigned char)17;
signed char var_14 = (signed char)27;
unsigned int var_15 = 3851034665U;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -1824063312;
int var_21 = -464812541;
unsigned long long int var_22 = 5490612422252742669ULL;
unsigned long long int var_23 = 14582696421347615682ULL;
unsigned short var_24 = (unsigned short)21697;
unsigned long long int var_25 = 18322643100268533748ULL;
signed char var_26 = (signed char)37;
int var_27 = 206993024;
unsigned short var_28 = (unsigned short)59098;
unsigned char var_29 = (unsigned char)187;
unsigned long long int var_30 = 16690727301876755697ULL;
_Bool var_31 = (_Bool)1;
unsigned int var_32 = 1077073090U;
_Bool arr_0 [17] ;
int arr_1 [17] [17] ;
unsigned short arr_3 [22] [22] ;
unsigned int arr_4 [22] ;
_Bool arr_5 [22] ;
_Bool arr_7 [21] ;
long long int arr_8 [21] ;
unsigned int arr_2 [17] ;
unsigned char arr_10 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = -2079983365;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)1880;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 3987217105U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = -6526843077857749000LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 1215079139U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (unsigned char)22;
}

void checksum() {
    hash(&seed, var_19);
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
