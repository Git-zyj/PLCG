#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2662669527579113845LL;
signed char var_5 = (signed char)-69;
long long int var_6 = 7962386579215383100LL;
signed char var_9 = (signed char)90;
short var_11 = (short)20059;
long long int var_14 = -6115332673609366967LL;
signed char var_15 = (signed char)25;
unsigned char var_18 = (unsigned char)166;
int zero = 0;
long long int var_19 = 7150126735878284727LL;
unsigned short var_20 = (unsigned short)56832;
signed char var_21 = (signed char)-28;
unsigned char var_22 = (unsigned char)249;
signed char var_23 = (signed char)-38;
int var_24 = 702466895;
long long int var_25 = 4119714683813454912LL;
short var_26 = (short)24244;
unsigned short var_27 = (unsigned short)58394;
unsigned int var_28 = 2056217278U;
signed char arr_3 [13] [13] ;
_Bool arr_4 [13] [13] [13] ;
unsigned long long int arr_13 [10] [10] ;
_Bool arr_20 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? 5442425335837028936ULL : 12713788647136472603ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
