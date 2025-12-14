#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17855;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-45;
unsigned short var_3 = (unsigned short)40816;
signed char var_4 = (signed char)17;
short var_5 = (short)-14900;
unsigned int var_6 = 2278386649U;
long long int var_7 = 1850417101558947833LL;
unsigned int var_8 = 173216684U;
unsigned short var_9 = (unsigned short)10638;
unsigned short var_10 = (unsigned short)42671;
signed char var_11 = (signed char)-63;
signed char var_12 = (signed char)4;
short var_13 = (short)-1757;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 6045473306137316149ULL;
unsigned long long int var_16 = 8273826506778217493ULL;
unsigned int var_17 = 830000991U;
int zero = 0;
signed char var_18 = (signed char)44;
unsigned char var_19 = (unsigned char)28;
short var_20 = (short)-9513;
unsigned long long int var_21 = 17237788859560021316ULL;
unsigned long long int var_22 = 4497834405965709427ULL;
unsigned char var_23 = (unsigned char)10;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)45709;
long long int var_26 = -5182963023618411711LL;
unsigned short var_27 = (unsigned short)29881;
unsigned char var_28 = (unsigned char)205;
signed char var_29 = (signed char)-79;
signed char var_30 = (signed char)90;
int var_31 = -1644622414;
_Bool var_32 = (_Bool)1;
unsigned char var_33 = (unsigned char)109;
int var_34 = 950064186;
long long int var_35 = 8601202927624458377LL;
signed char var_36 = (signed char)-67;
long long int var_37 = 1152715334412094076LL;
unsigned int arr_0 [25] ;
long long int arr_1 [25] [25] ;
signed char arr_3 [10] ;
unsigned short arr_4 [10] [10] ;
unsigned char arr_5 [10] [10] [10] ;
signed char arr_9 [10] [10] [10] ;
short arr_11 [10] ;
long long int arr_13 [10] [10] ;
signed char arr_14 [10] ;
int arr_2 [25] [25] ;
unsigned short arr_16 [10] ;
unsigned char arr_19 [10] [10] ;
signed char arr_23 [10] [10] [10] ;
long long int arr_26 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 66775427U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 5885574162718983380LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-6 : (signed char)-89;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)23151 : (unsigned short)26956;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)33;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (short)8784;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = 3717027530751522013LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 630798412 : -777131672;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned short)35679 : (unsigned short)8107;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)246 : (unsigned char)212;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-23 : (signed char)-57;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? 188356096214163145LL : -1058739062730790294LL;
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
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
