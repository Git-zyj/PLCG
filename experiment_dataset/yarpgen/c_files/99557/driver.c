#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36607;
_Bool var_5 = (_Bool)1;
unsigned int var_15 = 1215854602U;
int zero = 0;
signed char var_18 = (signed char)-111;
int var_19 = -372581523;
unsigned short var_20 = (unsigned short)37616;
unsigned short var_21 = (unsigned short)56118;
unsigned long long int var_22 = 13682231705690614747ULL;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)184;
unsigned short var_25 = (unsigned short)40571;
long long int arr_0 [17] [17] ;
short arr_1 [17] ;
unsigned short arr_4 [22] [22] ;
signed char arr_5 [22] ;
signed char arr_7 [11] ;
unsigned short arr_2 [17] ;
unsigned long long int arr_8 [11] ;
long long int arr_9 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 9130652232174653268LL : 4713710999961430641LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)22303;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)63239;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-99 : (signed char)-81;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (signed char)-91;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)59855 : (unsigned short)18281;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 2493554521199096238ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = 1253782395598889946LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
