#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5644628573216690498LL;
int var_1 = 1619732297;
unsigned short var_2 = (unsigned short)54675;
short var_3 = (short)26230;
unsigned char var_4 = (unsigned char)201;
unsigned short var_5 = (unsigned short)56895;
unsigned short var_6 = (unsigned short)49529;
long long int var_7 = -2082480440516055480LL;
short var_8 = (short)7719;
int var_9 = 1474472564;
unsigned char var_10 = (unsigned char)217;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)27812;
unsigned char var_13 = (unsigned char)165;
unsigned short var_14 = (unsigned short)42012;
unsigned long long int var_15 = 6281945189327393178ULL;
int var_16 = 851173594;
long long int var_17 = -8322414325137528218LL;
short var_18 = (short)-15200;
signed char var_19 = (signed char)117;
int var_20 = 1364541440;
short var_21 = (short)32129;
long long int var_22 = -6929104141220779677LL;
signed char var_23 = (signed char)-50;
unsigned char var_24 = (unsigned char)223;
short var_25 = (short)24149;
unsigned char var_26 = (unsigned char)172;
unsigned short var_27 = (unsigned short)11882;
unsigned int var_28 = 681999441U;
unsigned long long int var_29 = 1008928264211805145ULL;
signed char var_30 = (signed char)26;
unsigned int var_31 = 3572693904U;
unsigned long long int var_32 = 14132080098568878873ULL;
signed char var_33 = (signed char)46;
unsigned short var_34 = (unsigned short)31437;
short var_35 = (short)-15268;
long long int var_36 = -1078296657912765234LL;
unsigned char var_37 = (unsigned char)201;
unsigned long long int var_38 = 13628032576047977403ULL;
long long int arr_0 [10] ;
unsigned int arr_1 [10] ;
int arr_3 [10] [10] [10] ;
unsigned char arr_5 [10] [10] ;
unsigned long long int arr_6 [10] ;
int arr_7 [10] [10] ;
int arr_8 [10] [10] ;
long long int arr_9 [10] [10] [10] ;
unsigned int arr_10 [10] ;
int arr_12 [10] [10] [10] [10] ;
unsigned char arr_14 [10] ;
short arr_15 [10] [10] ;
unsigned int arr_20 [10] [10] [10] [10] [10] ;
unsigned char arr_24 [10] [10] ;
unsigned long long int arr_26 [10] [10] [10] ;
_Bool arr_33 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -3577090373181581415LL : -2597435393025842122LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 2937965771U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1134957424 : -53737834;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 10523113274609279121ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = 1406308206;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = 657882750;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 5152195445072877005LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = 493740531U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -3547027 : -1759351567;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)185 : (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-23073 : (short)7719;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = 3114296571U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_24 [i_0] [i_1] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = 4375516190367157514ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_33 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    hash(&seed, var_38);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
