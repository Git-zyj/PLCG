#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)38;
signed char var_5 = (signed char)-83;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)54108;
unsigned short var_13 = (unsigned short)58368;
short var_14 = (short)10027;
int zero = 0;
unsigned char var_18 = (unsigned char)5;
unsigned short var_19 = (unsigned short)11072;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-12575;
unsigned long long int var_22 = 4324311347771557435ULL;
unsigned char var_23 = (unsigned char)246;
short var_24 = (short)-4972;
signed char var_25 = (signed char)-27;
long long int var_26 = 7533133155036704597LL;
unsigned char var_27 = (unsigned char)182;
unsigned short var_28 = (unsigned short)28014;
_Bool var_29 = (_Bool)0;
unsigned int var_30 = 2684755695U;
short var_31 = (short)3351;
short var_32 = (short)-26572;
unsigned char var_33 = (unsigned char)73;
unsigned char arr_1 [23] ;
_Bool arr_2 [23] ;
_Bool arr_3 [23] [23] ;
signed char arr_4 [23] [23] ;
unsigned char arr_5 [23] [23] ;
unsigned int arr_9 [18] ;
short arr_10 [18] ;
short arr_6 [23] [23] ;
signed char arr_19 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)26;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 744017981U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (short)-30213;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-4036;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (signed char)105 : (signed char)14;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
