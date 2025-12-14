#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24094;
unsigned int var_1 = 382796086U;
signed char var_2 = (signed char)-119;
unsigned int var_3 = 790037965U;
signed char var_4 = (signed char)47;
signed char var_5 = (signed char)-103;
signed char var_6 = (signed char)46;
int var_7 = -1646120691;
int var_8 = 294588219;
unsigned short var_9 = (unsigned short)32127;
long long int var_10 = 2409567787477233617LL;
int var_11 = -1508096790;
int zero = 0;
unsigned short var_12 = (unsigned short)15333;
short var_13 = (short)-20071;
unsigned short var_14 = (unsigned short)60959;
short var_15 = (short)-26283;
signed char var_16 = (signed char)-74;
short var_17 = (short)16014;
int var_18 = 1860161533;
unsigned int var_19 = 1851022277U;
unsigned short var_20 = (unsigned short)43139;
signed char arr_0 [15] ;
int arr_1 [15] ;
signed char arr_5 [15] [15] [15] ;
signed char arr_7 [15] [15] ;
long long int arr_8 [15] [15] [15] [15] [15] ;
short arr_14 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 2071004356;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-116;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = 5988022459619079034LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-12861 : (short)9621;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
