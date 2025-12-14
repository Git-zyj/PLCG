#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13219;
long long int var_2 = -33934816686465509LL;
signed char var_4 = (signed char)29;
unsigned char var_8 = (unsigned char)4;
int var_9 = -1219898563;
int var_13 = 1464358685;
_Bool var_14 = (_Bool)1;
int var_16 = -388803467;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)165;
int var_20 = 1798956451;
unsigned int var_21 = 3958777088U;
unsigned int var_22 = 2600487063U;
short var_23 = (short)-26954;
unsigned int arr_1 [19] ;
unsigned short arr_3 [25] ;
long long int arr_4 [25] ;
unsigned char arr_5 [25] ;
signed char arr_6 [25] [25] ;
_Bool arr_8 [25] [25] ;
unsigned short arr_17 [25] [25] [25] [25] ;
long long int arr_18 [25] [25] [25] [25] ;
unsigned int arr_2 [19] ;
int arr_7 [25] ;
unsigned long long int arr_19 [25] [25] [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 34494987U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned short)36558;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 9105485491132801957LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned short)44013;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 4763052073553726568LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 4240367413U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 20269980;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? 17923561691280536178ULL : 234235396569336662ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
