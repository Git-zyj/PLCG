#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20318;
unsigned int var_1 = 2265412972U;
unsigned short var_2 = (unsigned short)47712;
unsigned int var_4 = 1970484783U;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 2789557308U;
signed char var_7 = (signed char)-88;
short var_8 = (short)-12787;
long long int var_9 = -6681295392008944939LL;
signed char var_10 = (signed char)-77;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)66;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2978594729U;
signed char var_17 = (signed char)-12;
unsigned char var_18 = (unsigned char)219;
_Bool var_19 = (_Bool)1;
long long int var_20 = -4836247394472046437LL;
int var_21 = 779497930;
unsigned int var_22 = 817026454U;
long long int var_23 = 1023682704804011501LL;
signed char var_24 = (signed char)-54;
signed char var_25 = (signed char)-49;
int var_26 = 2004069424;
unsigned int var_27 = 3651808627U;
unsigned int var_28 = 3777043665U;
unsigned short var_29 = (unsigned short)15001;
unsigned long long int arr_1 [13] [13] ;
int arr_2 [13] [13] [13] ;
_Bool arr_3 [13] [13] ;
unsigned char arr_4 [13] [13] ;
long long int arr_6 [22] [22] ;
short arr_7 [22] [22] ;
unsigned int arr_8 [22] ;
unsigned int arr_9 [22] [22] ;
short arr_11 [13] [13] ;
int arr_12 [13] ;
unsigned short arr_15 [13] [13] ;
short arr_17 [13] [13] [13] ;
unsigned int arr_19 [10] ;
int arr_22 [10] [10] [10] ;
unsigned long long int arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 13366433174626636791ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -1210536594;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = -9174750600585004123LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (short)19801;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 30788054U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = 662859402U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = (short)31899;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = -1332464580;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)5746;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (short)-5288;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = 3907940568U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1380799407 : -1063996976;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 17848158123651878644ULL : 11663912857705280621ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
