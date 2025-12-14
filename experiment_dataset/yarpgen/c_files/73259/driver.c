#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38245;
unsigned short var_1 = (unsigned short)1830;
int var_2 = -616480262;
unsigned char var_3 = (unsigned char)60;
unsigned char var_4 = (unsigned char)176;
int var_5 = 310130382;
short var_6 = (short)-17585;
unsigned long long int var_7 = 13731994781068724843ULL;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 1632784669U;
unsigned long long int var_11 = 12671269319942708827ULL;
long long int var_12 = -1481667136346319746LL;
int zero = 0;
unsigned short var_13 = (unsigned short)13071;
unsigned int var_14 = 2234411888U;
short var_15 = (short)-3139;
unsigned short var_16 = (unsigned short)26828;
unsigned long long int var_17 = 11036621109151680794ULL;
unsigned short var_18 = (unsigned short)57453;
unsigned short var_19 = (unsigned short)49669;
unsigned int var_20 = 2973413453U;
unsigned char var_21 = (unsigned char)0;
unsigned long long int var_22 = 2538906472930766959ULL;
unsigned int var_23 = 300138812U;
signed char var_24 = (signed char)12;
unsigned long long int var_25 = 17671965114844456387ULL;
int var_26 = 442775806;
unsigned int var_27 = 1862652556U;
unsigned int var_28 = 4076381611U;
short var_29 = (short)30783;
unsigned int var_30 = 2198147360U;
long long int var_31 = -1500981876138022887LL;
signed char arr_5 [11] [11] ;
unsigned char arr_11 [11] [11] [11] [11] ;
long long int arr_15 [11] ;
int arr_17 [22] ;
int arr_28 [22] [22] ;
long long int arr_29 [22] [22] [22] [22] [22] [22] ;
unsigned int arr_34 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? -8299996732865983121LL : -3651160094183535238LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 622476567 : -1175904024;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_28 [i_0] [i_1] = (i_1 % 2 == 0) ? -1403063559 : -248937249;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 1799684158903606120LL : 3433455979676032626LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_34 [i_0] [i_1] = 2875757332U;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
