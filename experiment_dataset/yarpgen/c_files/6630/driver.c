#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)101;
unsigned short var_3 = (unsigned short)28012;
unsigned long long int var_4 = 6888365204739984118ULL;
unsigned short var_5 = (unsigned short)8768;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
long long int var_8 = 6661781056425012698LL;
unsigned char var_9 = (unsigned char)171;
unsigned char var_10 = (unsigned char)255;
signed char var_11 = (signed char)-105;
unsigned char var_12 = (unsigned char)152;
unsigned int var_13 = 292143226U;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 2323393989U;
unsigned long long int var_17 = 3786364706781314997ULL;
signed char var_18 = (signed char)44;
signed char var_19 = (signed char)68;
unsigned short var_20 = (unsigned short)15881;
unsigned long long int var_21 = 9739930728160608613ULL;
unsigned int var_22 = 663659795U;
short var_23 = (short)-5874;
unsigned char var_24 = (unsigned char)65;
_Bool var_25 = (_Bool)0;
_Bool var_26 = (_Bool)1;
signed char var_27 = (signed char)96;
long long int var_28 = 7329282209860246214LL;
unsigned long long int var_29 = 9561960722233465078ULL;
unsigned int var_30 = 3592566501U;
unsigned int var_31 = 1734355283U;
unsigned long long int var_32 = 236916152857997217ULL;
_Bool var_33 = (_Bool)1;
long long int arr_0 [22] ;
signed char arr_1 [22] ;
signed char arr_2 [22] ;
signed char arr_4 [17] ;
unsigned long long int arr_5 [17] [17] ;
unsigned long long int arr_6 [17] [17] ;
unsigned int arr_7 [17] [17] ;
signed char arr_8 [17] [17] [17] ;
unsigned long long int arr_10 [17] [17] ;
signed char arr_11 [17] [17] [17] [17] ;
signed char arr_13 [17] ;
unsigned char arr_15 [16] ;
short arr_23 [16] ;
unsigned int arr_25 [16] ;
signed char arr_29 [16] [16] [16] ;
signed char arr_36 [22] ;
unsigned char arr_37 [22] [22] [22] ;
unsigned char arr_3 [22] ;
_Bool arr_14 [17] ;
unsigned short arr_21 [16] ;
unsigned short arr_22 [16] ;
unsigned long long int arr_31 [16] [16] [16] ;
unsigned int arr_32 [16] [16] [16] [16] ;
signed char arr_33 [16] ;
unsigned int arr_34 [16] [16] ;
_Bool arr_44 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 7643058193259895525LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)-54;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)11 : (signed char)73;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 9034607191138440155ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = 1957465223447405494ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = 2389880000U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = 17511447436660907861ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-36 : (signed char)105;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = (short)-2661;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_25 [i_0] = 3148455876U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_36 [i_0] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)194 : (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (unsigned short)38739 : (unsigned short)47240;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (unsigned short)15989 : (unsigned short)65394;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = 4712652405003626778ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = 3084916564U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_33 [i_0] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_34 [i_0] [i_1] = 2372320431U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_31 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_44 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
