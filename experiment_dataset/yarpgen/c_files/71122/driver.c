#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16500868556482593043ULL;
unsigned int var_1 = 2885145326U;
_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)94;
short var_5 = (short)8039;
unsigned long long int var_6 = 8567331003540112057ULL;
signed char var_9 = (signed char)75;
long long int var_10 = -2466611306449936792LL;
long long int var_12 = 2435320935352318182LL;
signed char var_13 = (signed char)-35;
int var_14 = 181114230;
short var_15 = (short)29916;
unsigned short var_17 = (unsigned short)33450;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
int var_20 = 19723947;
int var_21 = 782529368;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-78;
unsigned int var_24 = 3435555587U;
long long int var_25 = -2563903390869003538LL;
unsigned short var_26 = (unsigned short)10196;
unsigned int var_27 = 3148545845U;
int var_28 = 569468236;
signed char var_29 = (signed char)37;
_Bool var_30 = (_Bool)0;
unsigned char var_31 = (unsigned char)153;
unsigned short var_32 = (unsigned short)49278;
signed char var_33 = (signed char)34;
unsigned int var_34 = 769692805U;
int var_35 = -94252251;
unsigned long long int var_36 = 10322562969712705510ULL;
unsigned short arr_0 [16] ;
unsigned int arr_1 [16] [16] ;
short arr_3 [16] ;
unsigned char arr_5 [16] [16] [16] ;
unsigned short arr_10 [16] [16] [16] [16] [16] ;
unsigned short arr_12 [16] ;
short arr_14 [24] [24] ;
unsigned short arr_18 [24] [24] [24] ;
int arr_21 [24] [24] [24] [24] ;
unsigned long long int arr_25 [24] [24] [24] ;
short arr_11 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)18595;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 3374877379U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)8694;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)14787;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (unsigned short)18374;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_14 [i_0] [i_1] = (short)12930;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned short)6837;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 1840171821;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 8676690774745435025ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (short)-10053;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
