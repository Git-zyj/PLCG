#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)99;
unsigned int var_3 = 3844871484U;
unsigned int var_6 = 2833838475U;
unsigned int var_7 = 3124206538U;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned int var_13 = 1055985434U;
short var_14 = (short)-759;
signed char var_15 = (signed char)-25;
long long int var_16 = 2233064379419877439LL;
_Bool var_19 = (_Bool)1;
int zero = 0;
int var_20 = -1411577155;
int var_21 = 1565556864;
unsigned long long int var_22 = 3700668871206827115ULL;
unsigned char var_23 = (unsigned char)149;
unsigned char var_24 = (unsigned char)77;
unsigned int var_25 = 3098117940U;
int var_26 = 1724568367;
long long int var_27 = -298421887066937476LL;
short var_28 = (short)-17571;
signed char var_29 = (signed char)-125;
int var_30 = -255959925;
unsigned int var_31 = 1527329851U;
short var_32 = (short)-22176;
unsigned int var_33 = 3423314848U;
unsigned char arr_0 [11] ;
unsigned short arr_1 [11] ;
unsigned long long int arr_3 [11] [11] ;
short arr_4 [11] ;
int arr_7 [11] ;
int arr_10 [11] ;
unsigned short arr_2 [11] [11] ;
unsigned int arr_8 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned short)5062;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 14836245894199104730ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (short)-15974;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 197100681;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = -605800410;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)30772;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 2194498728U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
