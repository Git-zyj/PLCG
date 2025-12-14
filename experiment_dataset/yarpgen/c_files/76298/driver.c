#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1111863606;
unsigned int var_2 = 1218458994U;
signed char var_4 = (signed char)-100;
unsigned short var_9 = (unsigned short)35414;
unsigned int var_10 = 1407666599U;
signed char var_13 = (signed char)-41;
long long int var_15 = -3095980596937716826LL;
unsigned int var_17 = 1827451069U;
int zero = 0;
unsigned int var_18 = 3931849761U;
signed char var_19 = (signed char)38;
unsigned int var_20 = 561575928U;
unsigned short var_21 = (unsigned short)36852;
signed char var_22 = (signed char)-121;
long long int var_23 = -4755710637909859192LL;
unsigned long long int var_24 = 14671093594325615250ULL;
unsigned short var_25 = (unsigned short)16400;
unsigned int var_26 = 308842892U;
unsigned int var_27 = 3310145826U;
int var_28 = 1404526715;
signed char var_29 = (signed char)121;
signed char arr_1 [22] ;
unsigned short arr_5 [22] [22] [22] ;
signed char arr_8 [22] [22] [22] ;
signed char arr_9 [22] [22] [22] ;
signed char arr_11 [22] [22] [22] [22] [22] ;
unsigned long long int arr_14 [22] [22] [22] [22] [22] [22] ;
unsigned short arr_19 [10] [10] ;
short arr_22 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)-53;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)30829;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-35 : (signed char)18;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 855955456456795993ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)26787 : (unsigned short)56022;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_22 [i_0] = (short)14532;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
