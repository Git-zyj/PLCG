#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)32;
unsigned int var_1 = 4100987632U;
int var_2 = 1546148294;
unsigned int var_3 = 3765062815U;
unsigned short var_4 = (unsigned short)46699;
unsigned short var_5 = (unsigned short)22645;
signed char var_6 = (signed char)73;
unsigned int var_7 = 3225925144U;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)29983;
int zero = 0;
unsigned short var_10 = (unsigned short)30680;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 646567697224515631ULL;
long long int var_13 = 8503977769280337943LL;
unsigned short var_14 = (unsigned short)23108;
signed char var_15 = (signed char)-22;
unsigned short var_16 = (unsigned short)56273;
unsigned int var_17 = 3027778488U;
unsigned char var_18 = (unsigned char)69;
unsigned char var_19 = (unsigned char)125;
_Bool var_20 = (_Bool)1;
long long int var_21 = 2591114118822245829LL;
unsigned int var_22 = 3899432487U;
unsigned char var_23 = (unsigned char)73;
_Bool var_24 = (_Bool)0;
unsigned char arr_1 [14] [14] ;
_Bool arr_4 [14] ;
unsigned long long int arr_5 [14] [14] ;
unsigned int arr_8 [14] [14] [14] [14] ;
short arr_9 [14] [14] [14] [14] [14] ;
short arr_18 [14] ;
int arr_19 [14] ;
short arr_21 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 2862477687051413914ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2411552464U : 66452279U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)25002;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = (short)24381;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = 1945272333;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-1774 : (short)-18567;
}

void checksum() {
    hash(&seed, var_10);
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
