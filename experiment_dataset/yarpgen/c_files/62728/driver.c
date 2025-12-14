#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1149247090832732818LL;
long long int var_2 = 2084648724781704546LL;
int var_4 = 896246746;
long long int var_5 = -654129870236956909LL;
signed char var_7 = (signed char)-13;
unsigned int var_11 = 3222264605U;
short var_13 = (short)-28630;
unsigned long long int var_15 = 2019801351062587721ULL;
unsigned int var_16 = 3974510921U;
int zero = 0;
unsigned short var_19 = (unsigned short)56787;
long long int var_20 = -5684141484844466581LL;
unsigned char var_21 = (unsigned char)102;
signed char var_22 = (signed char)28;
short var_23 = (short)7706;
short var_24 = (short)21501;
short var_25 = (short)19263;
unsigned char var_26 = (unsigned char)188;
unsigned short var_27 = (unsigned short)23860;
unsigned long long int var_28 = 15113791980891035119ULL;
unsigned long long int var_29 = 8911189617094047684ULL;
_Bool var_30 = (_Bool)1;
short var_31 = (short)-29994;
unsigned long long int var_32 = 16919489514919538569ULL;
signed char var_33 = (signed char)16;
_Bool var_34 = (_Bool)0;
unsigned char arr_1 [22] [22] ;
int arr_2 [22] ;
unsigned char arr_4 [22] ;
signed char arr_5 [22] [22] [22] ;
short arr_12 [21] ;
unsigned long long int arr_13 [25] ;
_Bool arr_14 [25] [25] ;
unsigned char arr_15 [25] ;
unsigned char arr_16 [25] [25] [25] ;
unsigned long long int arr_19 [25] [25] [25] [25] ;
int arr_22 [22] ;
int arr_33 [22] ;
unsigned long long int arr_35 [22] [22] [22] [22] ;
unsigned long long int arr_6 [22] ;
_Bool arr_9 [19] ;
signed char arr_10 [19] ;
short arr_20 [25] [25] [25] ;
unsigned short arr_21 [25] ;
unsigned short arr_26 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1658684132 : 1972054406;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (short)-12218;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = 3745978156060044417ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 16873918870314812285ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = 982241969;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_33 [i_0] = 288911081;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = 7519574031717770610ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 12099636659917755240ULL : 15109981640868799831ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (signed char)56;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (short)-15763;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = (unsigned short)18754;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_26 [i_0] [i_1] = (unsigned short)7494;
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
