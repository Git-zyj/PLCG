#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25451;
unsigned long long int var_2 = 16201877847849143715ULL;
unsigned int var_3 = 108501339U;
unsigned char var_4 = (unsigned char)195;
short var_5 = (short)28809;
unsigned char var_6 = (unsigned char)97;
unsigned char var_7 = (unsigned char)239;
unsigned char var_10 = (unsigned char)45;
unsigned char var_11 = (unsigned char)80;
int zero = 0;
unsigned short var_14 = (unsigned short)6254;
unsigned short var_15 = (unsigned short)54720;
unsigned short var_16 = (unsigned short)23362;
unsigned char var_17 = (unsigned char)95;
unsigned long long int var_18 = 12313266902796569444ULL;
unsigned short var_19 = (unsigned short)42268;
unsigned short var_20 = (unsigned short)53228;
short var_21 = (short)-27292;
unsigned short var_22 = (unsigned short)48725;
signed char var_23 = (signed char)-125;
unsigned int arr_0 [23] ;
unsigned short arr_1 [23] ;
unsigned char arr_3 [23] [23] ;
int arr_4 [23] ;
_Bool arr_5 [23] [23] [23] ;
_Bool arr_6 [18] ;
long long int arr_8 [18] [18] ;
_Bool arr_10 [18] ;
_Bool arr_11 [18] [18] ;
_Bool arr_15 [18] [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1181199845U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)59437;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)86 : (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1205643540 : -1779661100;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = 4439654045804524023LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
