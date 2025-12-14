#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)16;
short var_2 = (short)-24174;
unsigned int var_3 = 1697794477U;
short var_4 = (short)30391;
unsigned char var_5 = (unsigned char)243;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 1874506644796428895ULL;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)95;
_Bool var_10 = (_Bool)1;
long long int var_11 = -7891964819716758780LL;
int zero = 0;
signed char var_12 = (signed char)-1;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)180;
unsigned char var_15 = (unsigned char)64;
unsigned short var_16 = (unsigned short)17232;
_Bool var_17 = (_Bool)1;
long long int var_18 = 8353575747931752735LL;
_Bool var_19 = (_Bool)1;
int var_20 = -1709653690;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)212;
unsigned int var_23 = 3454202647U;
unsigned long long int var_24 = 12240926346701664508ULL;
int var_25 = 1753573442;
signed char var_26 = (signed char)105;
signed char var_27 = (signed char)5;
unsigned char arr_2 [14] [14] [14] ;
unsigned short arr_3 [14] ;
unsigned int arr_5 [14] [14] [14] ;
unsigned short arr_7 [14] [14] ;
_Bool arr_8 [14] [14] [14] [14] [14] [14] ;
unsigned char arr_10 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)4182;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 490772629U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)45671 : (unsigned short)40525;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)133;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
