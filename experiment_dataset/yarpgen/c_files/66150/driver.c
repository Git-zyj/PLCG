#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)116;
unsigned short var_2 = (unsigned short)11994;
signed char var_3 = (signed char)86;
unsigned long long int var_4 = 9235073395276252603ULL;
unsigned long long int var_5 = 378935049296785484ULL;
unsigned char var_6 = (unsigned char)107;
unsigned long long int var_7 = 9903214136579186337ULL;
unsigned long long int var_8 = 13521816709086212902ULL;
unsigned long long int var_10 = 9396018970333740202ULL;
unsigned short var_11 = (unsigned short)50352;
unsigned short var_13 = (unsigned short)42342;
unsigned short var_15 = (unsigned short)41787;
int zero = 0;
long long int var_17 = -3264105454859874945LL;
unsigned int var_18 = 1739837657U;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)12278;
signed char var_21 = (signed char)-44;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 13277376936100184327ULL;
signed char var_25 = (signed char)65;
short var_26 = (short)-9160;
signed char var_27 = (signed char)36;
unsigned long long int var_28 = 17216947673538430834ULL;
short var_29 = (short)28162;
signed char var_30 = (signed char)-22;
unsigned long long int var_31 = 15271837984395961837ULL;
unsigned long long int var_32 = 11468188565059165737ULL;
unsigned int var_33 = 3713828169U;
signed char var_34 = (signed char)84;
unsigned int var_35 = 2248897226U;
signed char var_36 = (signed char)-12;
unsigned short var_37 = (unsigned short)52979;
_Bool arr_0 [12] [12] ;
signed char arr_1 [12] [12] ;
unsigned short arr_7 [20] ;
unsigned short arr_8 [20] ;
unsigned long long int arr_9 [20] ;
short arr_10 [20] ;
long long int arr_14 [20] ;
unsigned long long int arr_18 [20] ;
_Bool arr_21 [20] [20] ;
unsigned long long int arr_23 [11] [11] ;
_Bool arr_28 [22] ;
_Bool arr_31 [25] [25] ;
unsigned long long int arr_35 [25] [25] [25] ;
unsigned int arr_36 [25] [25] [25] ;
unsigned short arr_11 [20] ;
signed char arr_12 [20] ;
unsigned long long int arr_17 [20] ;
unsigned int arr_22 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-60;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)43686 : (unsigned short)9398;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (unsigned short)63324;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = 16127061812867496265ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (short)-5487;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = -2386128976070695471LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = 14380476539181406831ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_21 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_23 [i_0] [i_1] = (i_0 % 2 == 0) ? 13547243684951511072ULL : 15537650567047340044ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_28 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_31 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 13562113010980015609ULL : 8180074146089383434ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = 4207609621U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)62112 : (unsigned short)22158;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (signed char)66 : (signed char)-4;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = 16755595061209099088ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_22 [i_0] [i_1] = 2347433843U;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
