#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17457;
short var_1 = (short)-14706;
unsigned long long int var_3 = 13994948361871687383ULL;
unsigned long long int var_4 = 2787116792731660402ULL;
unsigned char var_6 = (unsigned char)254;
unsigned int var_8 = 286423623U;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)35101;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)36549;
int var_14 = -818874645;
unsigned short var_15 = (unsigned short)42222;
unsigned short var_16 = (unsigned short)49234;
int zero = 0;
int var_17 = -1235157066;
long long int var_18 = -9058958101665153230LL;
unsigned long long int var_19 = 11899663100543124329ULL;
unsigned int var_20 = 3780076240U;
unsigned char var_21 = (unsigned char)114;
unsigned int var_22 = 656154473U;
signed char var_23 = (signed char)-27;
unsigned long long int var_24 = 6505428032002638256ULL;
unsigned short var_25 = (unsigned short)28894;
unsigned long long int var_26 = 1455287020908665065ULL;
int var_27 = -247299722;
short arr_0 [13] ;
long long int arr_7 [13] [13] [13] ;
unsigned int arr_11 [13] [13] [13] ;
long long int arr_17 [12] ;
unsigned long long int arr_19 [12] ;
long long int arr_28 [12] ;
unsigned long long int arr_4 [13] [13] [13] ;
_Bool arr_5 [13] ;
unsigned int arr_16 [13] [13] [13] [13] [13] ;
unsigned long long int arr_23 [12] ;
short arr_24 [12] [12] ;
unsigned short arr_27 [12] [12] ;
int arr_31 [12] ;
_Bool arr_38 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)6024;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 9093509358393039917LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 3831187028U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = -5109337104014622331LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = 1813803175075945154ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_28 [i_0] = 9176160947553467926LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2895264720758654140ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 2208181586U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_23 [i_0] = 6340923612625353879ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_24 [i_0] [i_1] = (short)-3340;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_27 [i_0] [i_1] = (unsigned short)28669;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_31 [i_0] = -1542989685;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_38 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
