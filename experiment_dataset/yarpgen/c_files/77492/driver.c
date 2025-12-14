#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 237226115;
short var_1 = (short)10479;
int var_2 = 1807863129;
unsigned char var_3 = (unsigned char)38;
unsigned long long int var_4 = 8697558302265883655ULL;
short var_5 = (short)-15394;
_Bool var_6 = (_Bool)1;
int var_7 = 518413938;
int var_8 = -812923581;
signed char var_9 = (signed char)108;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)180;
int var_12 = 175358248;
short var_13 = (short)-2129;
short var_14 = (short)-20413;
short var_15 = (short)-5182;
unsigned char var_16 = (unsigned char)238;
unsigned short var_17 = (unsigned short)41695;
unsigned long long int var_18 = 16539680113715107752ULL;
unsigned char var_19 = (unsigned char)132;
unsigned long long int var_20 = 13352189085267575486ULL;
short var_21 = (short)20852;
signed char var_22 = (signed char)80;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)-43;
unsigned short var_25 = (unsigned short)60461;
int var_26 = 846135752;
int var_27 = -1735600539;
_Bool var_28 = (_Bool)1;
short var_29 = (short)-6595;
signed char arr_0 [12] ;
unsigned short arr_6 [16] ;
signed char arr_11 [16] [16] [16] ;
unsigned short arr_13 [16] [16] [16] [16] ;
signed char arr_31 [16] ;
int arr_12 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned short)51740;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)43;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)55436 : (unsigned short)61893;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_31 [i_0] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 339503558 : 1628358884;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
