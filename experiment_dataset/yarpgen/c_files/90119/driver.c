#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1804358369;
short var_1 = (short)-8705;
unsigned char var_3 = (unsigned char)218;
signed char var_5 = (signed char)101;
unsigned long long int var_7 = 13122632045172663717ULL;
unsigned short var_8 = (unsigned short)60822;
unsigned long long int var_9 = 7617116970547757251ULL;
int var_10 = -1594613734;
unsigned short var_11 = (unsigned short)8745;
unsigned short var_12 = (unsigned short)57277;
unsigned short var_13 = (unsigned short)28866;
unsigned short var_14 = (unsigned short)1102;
signed char var_15 = (signed char)-107;
int zero = 0;
unsigned short var_16 = (unsigned short)17469;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-16694;
unsigned short var_19 = (unsigned short)38876;
signed char var_20 = (signed char)26;
long long int var_21 = 916808795392058541LL;
unsigned short var_22 = (unsigned short)24245;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)27518;
short var_25 = (short)-18890;
signed char var_26 = (signed char)-21;
unsigned int var_27 = 2919387582U;
int var_28 = 1877562568;
short var_29 = (short)-31607;
unsigned short var_30 = (unsigned short)65344;
unsigned short var_31 = (unsigned short)5051;
long long int var_32 = 8599878260557335003LL;
_Bool arr_0 [18] ;
unsigned short arr_2 [18] ;
_Bool arr_4 [18] [18] [18] ;
unsigned int arr_5 [18] [18] [18] ;
unsigned int arr_8 [18] [18] [18] ;
long long int arr_11 [18] [18] [18] [18] ;
unsigned short arr_14 [18] [18] ;
unsigned short arr_15 [18] ;
unsigned short arr_16 [18] [18] [18] [18] ;
long long int arr_19 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)46595;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 712362013U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 3151543001U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = -8161441958940063621LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)25173;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (unsigned short)57034;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned short)932;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_19 [i_0] [i_1] = 6979146845303617974LL;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
