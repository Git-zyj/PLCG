#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1287812629690643763LL;
signed char var_3 = (signed char)118;
unsigned char var_6 = (unsigned char)192;
unsigned int var_8 = 2512598162U;
unsigned long long int var_9 = 605523514222084500ULL;
unsigned short var_10 = (unsigned short)6411;
long long int var_11 = 6013302004179415931LL;
short var_13 = (short)25156;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 2262320047U;
unsigned char var_21 = (unsigned char)31;
unsigned char var_22 = (unsigned char)76;
short var_23 = (short)-19087;
unsigned long long int var_24 = 16793175618660963977ULL;
signed char var_25 = (signed char)123;
int var_26 = 660245379;
unsigned int var_27 = 444613391U;
signed char var_28 = (signed char)50;
unsigned char var_29 = (unsigned char)109;
signed char var_30 = (signed char)-106;
signed char var_31 = (signed char)-23;
unsigned int var_32 = 2639548849U;
unsigned int var_33 = 2952391065U;
unsigned long long int var_34 = 13337884100743604893ULL;
signed char var_35 = (signed char)117;
int var_36 = 852209310;
signed char var_37 = (signed char)94;
_Bool arr_0 [11] [11] ;
unsigned long long int arr_1 [11] ;
signed char arr_2 [11] [11] ;
signed char arr_3 [11] ;
_Bool arr_5 [11] [11] [11] ;
short arr_9 [11] [11] ;
unsigned short arr_11 [16] ;
unsigned short arr_12 [16] [16] ;
unsigned char arr_16 [14] ;
unsigned long long int arr_8 [11] ;
signed char arr_13 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 6701799560115429385ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)23;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-1785;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (unsigned short)5125;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)59851;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (unsigned char)124;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 6518551568110369416ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (signed char)-100;
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
