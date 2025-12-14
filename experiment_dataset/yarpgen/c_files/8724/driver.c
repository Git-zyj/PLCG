#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5725;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-111;
int var_5 = 1252375991;
unsigned int var_6 = 63249124U;
short var_10 = (short)-22391;
long long int var_11 = 3089077633744834488LL;
unsigned char var_12 = (unsigned char)166;
unsigned long long int var_13 = 6355136757014906451ULL;
short var_14 = (short)23706;
unsigned short var_15 = (unsigned short)9461;
int zero = 0;
unsigned int var_17 = 3089649456U;
short var_18 = (short)894;
short var_19 = (short)4246;
short var_20 = (short)-1867;
unsigned char var_21 = (unsigned char)48;
unsigned int var_22 = 1489537715U;
signed char var_23 = (signed char)-60;
unsigned char var_24 = (unsigned char)137;
short var_25 = (short)30703;
_Bool var_26 = (_Bool)0;
short var_27 = (short)-22295;
unsigned int arr_1 [12] [12] ;
unsigned short arr_2 [12] ;
unsigned long long int arr_3 [12] [12] [12] ;
_Bool arr_4 [12] ;
int arr_6 [12] ;
_Bool arr_7 [12] [12] ;
unsigned long long int arr_9 [12] [12] [12] [12] ;
signed char arr_10 [12] [12] [12] ;
short arr_11 [12] [12] [12] [12] [12] ;
unsigned long long int arr_12 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 2420860617U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)62735;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3022665317484897428ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 1513949223;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 7056821451968447815ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)125;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)15333;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 8347187352875370013ULL;
}

void checksum() {
    hash(&seed, var_17);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
