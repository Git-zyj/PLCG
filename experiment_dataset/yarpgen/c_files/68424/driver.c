#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2313455520U;
unsigned char var_1 = (unsigned char)124;
signed char var_3 = (signed char)-61;
unsigned long long int var_5 = 7168674290691218251ULL;
int var_6 = 2062416798;
unsigned int var_8 = 2156013211U;
short var_9 = (short)26685;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 13686574738117093796ULL;
unsigned char var_12 = (unsigned char)136;
short var_14 = (short)13959;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_17 = -725093503;
unsigned short var_18 = (unsigned short)51681;
unsigned short var_19 = (unsigned short)23276;
unsigned char var_20 = (unsigned char)60;
long long int var_21 = -5225950916094255065LL;
long long int var_22 = 6180247195513998094LL;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 6104403313474371173ULL;
unsigned short var_25 = (unsigned short)41467;
unsigned int var_26 = 1668472993U;
unsigned int var_27 = 492716479U;
signed char var_28 = (signed char)-102;
_Bool var_29 = (_Bool)0;
long long int var_30 = 8044780918966482240LL;
signed char var_31 = (signed char)111;
unsigned char var_32 = (unsigned char)240;
unsigned char var_33 = (unsigned char)78;
unsigned long long int var_34 = 5537050803006157187ULL;
signed char var_35 = (signed char)-125;
unsigned int var_36 = 27609788U;
unsigned short var_37 = (unsigned short)46528;
unsigned char var_38 = (unsigned char)123;
int var_39 = -1122579303;
unsigned int arr_0 [12] ;
signed char arr_1 [12] [12] ;
unsigned int arr_2 [12] ;
unsigned short arr_4 [10] ;
long long int arr_9 [10] [10] [10] [10] ;
unsigned short arr_13 [10] [10] ;
unsigned int arr_17 [10] ;
unsigned short arr_22 [10] [10] [10] [10] ;
unsigned short arr_23 [10] [10] [10] [10] [10] ;
unsigned char arr_29 [10] ;
unsigned char arr_31 [10] [10] ;
unsigned short arr_41 [10] [10] [10] ;
long long int arr_14 [10] [10] [10] [10] [10] [10] ;
unsigned short arr_51 [10] [10] [10] ;
unsigned char arr_52 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 557976025U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 706346045U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned short)63360;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 3831286346778208252LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)11103;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = 1196456974U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (unsigned short)3477;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned short)50121 : (unsigned short)37588;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_29 [i_0] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_31 [i_0] [i_1] = (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)14122 : (unsigned short)34703;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -4103846021497134538LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_51 [i_0] [i_1] [i_2] = (unsigned short)27529;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_52 [i_0] = (unsigned char)76;
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_51 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_52 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
