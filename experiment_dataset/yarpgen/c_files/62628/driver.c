#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12961;
unsigned char var_1 = (unsigned char)213;
int var_2 = -571612445;
unsigned char var_4 = (unsigned char)145;
_Bool var_5 = (_Bool)0;
unsigned int var_8 = 1468655276U;
short var_9 = (short)16963;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 14229302184970853472ULL;
short var_14 = (short)-19564;
signed char var_15 = (signed char)83;
unsigned char var_16 = (unsigned char)143;
int zero = 0;
signed char var_17 = (signed char)58;
unsigned char var_18 = (unsigned char)7;
unsigned short var_19 = (unsigned short)53523;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
int var_22 = 1820953896;
unsigned char var_23 = (unsigned char)77;
short var_24 = (short)-6373;
short var_25 = (short)5013;
short var_26 = (short)32091;
unsigned char var_27 = (unsigned char)144;
int var_28 = 280396350;
signed char var_29 = (signed char)-105;
_Bool arr_6 [19] ;
unsigned char arr_8 [19] ;
_Bool arr_9 [19] ;
int arr_11 [19] [19] [19] ;
short arr_13 [19] [19] ;
_Bool arr_16 [19] [19] [19] ;
unsigned short arr_19 [13] [13] ;
short arr_3 [16] ;
unsigned char arr_10 [19] [19] ;
unsigned long long int arr_17 [19] ;
unsigned char arr_21 [13] ;
signed char arr_25 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 201388943;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = (short)-2362;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned short)6406;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)-30413;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = 11842926506062825844ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_21 [i_0] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_25 [i_0] = (signed char)-104;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
