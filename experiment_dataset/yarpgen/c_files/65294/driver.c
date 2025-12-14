#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32427;
int var_1 = -1556358826;
unsigned long long int var_2 = 3611534526724905721ULL;
unsigned char var_3 = (unsigned char)165;
unsigned long long int var_4 = 10966889474691931016ULL;
unsigned long long int var_6 = 5660879656211501933ULL;
int var_7 = -1938120048;
unsigned char var_8 = (unsigned char)133;
long long int var_9 = -1944289630029194206LL;
signed char var_10 = (signed char)-43;
int zero = 0;
short var_13 = (short)-8950;
unsigned short var_14 = (unsigned short)62873;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)57;
unsigned short var_17 = (unsigned short)26914;
unsigned long long int var_18 = 6436782721081980394ULL;
unsigned int var_19 = 3677818609U;
unsigned long long int var_20 = 8633432839341443125ULL;
int var_21 = -978060918;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-37;
unsigned long long int var_24 = 17085724987423949866ULL;
short var_25 = (short)-2477;
unsigned short var_26 = (unsigned short)63357;
unsigned char var_27 = (unsigned char)40;
unsigned int var_28 = 1133706266U;
unsigned long long int arr_0 [19] ;
short arr_1 [19] [19] ;
int arr_2 [19] ;
short arr_3 [19] [19] ;
unsigned int arr_5 [19] [19] [19] ;
unsigned int arr_6 [19] [19] ;
short arr_7 [19] [19] [19] [19] [19] ;
short arr_9 [19] [19] [19] [19] ;
_Bool arr_10 [19] [19] [19] [19] [19] ;
unsigned long long int arr_12 [19] [19] [19] [19] [19] ;
int arr_13 [19] [19] [19] ;
unsigned long long int arr_14 [19] [19] [19] [19] ;
unsigned short arr_16 [24] ;
int arr_17 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 18416754642630459566ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (short)25926;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -138424685;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (short)20920;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3662417568U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 3424293691U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)2735;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)-19285;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 4380053083225747943ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -234179294;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 13118455597608753027ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = (unsigned short)31893;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_17 [i_0] [i_1] = -173686228;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
