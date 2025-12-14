#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3703833091U;
unsigned int var_1 = 3807352500U;
unsigned long long int var_2 = 7048480042588853793ULL;
short var_3 = (short)-12484;
short var_4 = (short)1236;
short var_5 = (short)-21139;
short var_7 = (short)32332;
unsigned short var_8 = (unsigned short)35999;
short var_9 = (short)-14631;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-25333;
unsigned long long int var_13 = 1030887975234199938ULL;
int zero = 0;
int var_14 = 646179310;
unsigned char var_15 = (unsigned char)209;
unsigned short var_16 = (unsigned short)12193;
unsigned char var_17 = (unsigned char)253;
unsigned long long int var_18 = 3022044993745343461ULL;
unsigned int var_19 = 1272017267U;
unsigned int var_20 = 3461969318U;
short var_21 = (short)10350;
short var_22 = (short)-27369;
unsigned char var_23 = (unsigned char)156;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)1;
int arr_18 [15] [15] ;
unsigned int arr_21 [14] [14] ;
signed char arr_22 [14] ;
unsigned char arr_27 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? -2106383865 : 1180535072;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_21 [i_0] [i_1] = 1325342949U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_22 [i_0] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_27 [i_0] = (unsigned char)163;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
