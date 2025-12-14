#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15451;
signed char var_1 = (signed char)-37;
unsigned char var_2 = (unsigned char)205;
signed char var_3 = (signed char)52;
unsigned int var_4 = 2088985269U;
long long int var_5 = 2931316400408900764LL;
long long int var_6 = 4005516557804634429LL;
unsigned char var_7 = (unsigned char)64;
unsigned short var_8 = (unsigned short)15761;
unsigned int var_12 = 2312354461U;
_Bool var_14 = (_Bool)1;
int var_15 = 493871414;
int zero = 0;
unsigned long long int var_16 = 14050941429711230296ULL;
signed char var_17 = (signed char)6;
unsigned short var_18 = (unsigned short)58583;
unsigned int var_19 = 2310532249U;
unsigned char var_20 = (unsigned char)62;
short var_21 = (short)-29329;
unsigned int var_22 = 4016185701U;
unsigned long long int var_23 = 18188204545057672150ULL;
unsigned short var_24 = (unsigned short)32114;
int var_25 = -1222295324;
int var_26 = -56662855;
long long int var_27 = 857746816952288727LL;
unsigned int arr_0 [16] ;
unsigned int arr_1 [16] [16] ;
long long int arr_2 [16] [16] ;
unsigned int arr_3 [16] ;
unsigned int arr_4 [16] [16] [16] ;
int arr_5 [16] [16] ;
long long int arr_6 [16] [16] ;
int arr_7 [16] [16] [16] ;
_Bool arr_9 [16] [16] [16] [16] ;
unsigned long long int arr_10 [16] [16] [16] [16] ;
unsigned long long int arr_11 [16] [16] ;
int arr_14 [16] ;
unsigned long long int arr_15 [16] [16] ;
signed char arr_17 [16] ;
unsigned long long int arr_13 [16] [16] [16] ;
unsigned short arr_16 [16] ;
short arr_19 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 361571973U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 1842064935U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = -1749690538923882891LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 3130584704U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3650033440U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = -461411363;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = -8004965480457566132LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 430524383;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 7973830824401758262ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = 16553579161157871916ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = 928094599;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = 12181970840177596020ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 6061281988638526752ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned short)27556 : (unsigned short)54664;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = (short)26516;
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
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
