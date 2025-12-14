#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4912889065206362863LL;
unsigned int var_1 = 1571684250U;
signed char var_2 = (signed char)-17;
short var_3 = (short)-14319;
unsigned long long int var_4 = 6876016982936489263ULL;
_Bool var_5 = (_Bool)0;
int var_6 = 2131752988;
int var_7 = -1244040362;
short var_9 = (short)-16201;
unsigned int var_10 = 2045384351U;
int var_11 = 1880632803;
int var_12 = -1849639849;
unsigned int var_13 = 3224169801U;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-24133;
int zero = 0;
unsigned short var_16 = (unsigned short)5301;
short var_17 = (short)-26711;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 653996090U;
unsigned short var_20 = (unsigned short)43129;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)212;
short var_23 = (short)-14191;
long long int var_24 = 8688016669701238313LL;
long long int var_25 = -4723292902834434940LL;
short var_26 = (short)17662;
_Bool var_27 = (_Bool)0;
signed char var_28 = (signed char)19;
unsigned long long int arr_0 [17] [17] ;
unsigned short arr_1 [17] ;
_Bool arr_2 [17] ;
unsigned char arr_5 [17] ;
unsigned short arr_6 [17] [17] ;
int arr_8 [17] [17] [17] [17] ;
unsigned short arr_16 [21] [21] ;
short arr_14 [17] [17] [17] [17] ;
short arr_15 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 7310001804951209744ULL : 15438222077722145222ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)40077;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)19216;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -368667993;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned short)35760;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)-9665 : (short)23314;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (short)4348 : (short)-3580;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
