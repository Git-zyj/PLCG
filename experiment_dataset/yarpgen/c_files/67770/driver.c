#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3546;
int var_1 = -274155402;
_Bool var_2 = (_Bool)1;
int var_3 = 772696681;
unsigned int var_4 = 1402269648U;
unsigned int var_6 = 2639132943U;
unsigned int var_7 = 4001145561U;
unsigned int var_8 = 180499157U;
int var_10 = -1854774655;
unsigned char var_11 = (unsigned char)156;
short var_12 = (short)-18245;
int var_15 = 1238510360;
int var_17 = -1767212862;
unsigned int var_18 = 614743766U;
_Bool var_19 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)50;
short var_22 = (short)-9881;
unsigned char var_23 = (unsigned char)4;
_Bool var_24 = (_Bool)0;
short var_25 = (short)7688;
long long int var_26 = 2285087376900963443LL;
unsigned short var_27 = (unsigned short)52640;
_Bool var_28 = (_Bool)0;
_Bool var_29 = (_Bool)0;
_Bool var_30 = (_Bool)0;
unsigned char arr_0 [25] ;
unsigned int arr_1 [25] ;
unsigned char arr_2 [25] ;
unsigned char arr_4 [25] ;
unsigned int arr_5 [25] [25] [25] [25] ;
long long int arr_6 [25] [25] ;
int arr_7 [25] [25] ;
int arr_8 [25] [25] [25] [25] [25] ;
_Bool arr_9 [25] [25] [25] [25] [25] ;
signed char arr_10 [25] [25] [25] [25] [25] [25] [25] ;
int arr_12 [25] ;
_Bool arr_16 [25] [25] [25] ;
int arr_17 [25] ;
_Bool arr_19 [25] ;
unsigned short arr_22 [25] ;
unsigned short arr_23 [10] ;
int arr_14 [25] ;
long long int arr_15 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 44514519U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2998962598U : 338697405U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = -2441623620355880209LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = -1402505808;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = -1418860932;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? (signed char)124 : (signed char)32;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = 1907300123;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = -1483785496;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_22 [i_0] = (unsigned short)5478;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_23 [i_0] = (unsigned short)42992;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = -239241800;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = -5052200655309271055LL;
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
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
