#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26249;
signed char var_2 = (signed char)-19;
long long int var_4 = 8473499485200031974LL;
unsigned char var_5 = (unsigned char)241;
signed char var_7 = (signed char)39;
unsigned short var_9 = (unsigned short)59956;
long long int var_10 = -7649149289717783654LL;
unsigned char var_13 = (unsigned char)136;
int var_14 = -523399785;
int zero = 0;
unsigned short var_16 = (unsigned short)11819;
unsigned int var_17 = 2245115158U;
long long int var_18 = -7559755901706319014LL;
long long int var_19 = -3914273891422127624LL;
signed char var_20 = (signed char)-42;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
int var_23 = -1391433394;
unsigned char var_24 = (unsigned char)162;
unsigned int var_25 = 2549890282U;
short var_26 = (short)9250;
short arr_1 [13] ;
long long int arr_2 [13] ;
long long int arr_3 [13] [13] ;
unsigned short arr_4 [13] [13] ;
_Bool arr_6 [13] ;
_Bool arr_7 [13] ;
signed char arr_9 [13] [13] [13] ;
unsigned long long int arr_13 [13] [13] [13] ;
unsigned short arr_15 [13] ;
_Bool arr_11 [13] [13] [13] ;
long long int arr_17 [13] [13] [13] [13] ;
unsigned long long int arr_18 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)13130;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -4100791705201843933LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = -1854452603722931611LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)16031;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)-15;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 15975510048080223865ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = (unsigned short)17414;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 8183508755295445296LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = 14241600988401855601ULL;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
