#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 16576503370831115286ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 16027309509254356831ULL;
unsigned char var_16 = (unsigned char)153;
int zero = 0;
unsigned short var_18 = (unsigned short)19338;
int var_19 = 1902928044;
long long int var_20 = -5565409423746320335LL;
unsigned char var_21 = (unsigned char)45;
unsigned short var_22 = (unsigned short)17268;
long long int var_23 = -3932423665520303025LL;
short var_24 = (short)-31860;
short var_25 = (short)22310;
signed char arr_0 [18] ;
short arr_1 [18] ;
long long int arr_3 [18] ;
short arr_5 [24] ;
unsigned long long int arr_14 [24] [24] [24] [24] [24] ;
short arr_6 [24] ;
unsigned short arr_16 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)-16706;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = -1176047180274529182LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (short)17099;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = 2879520124372823343ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (short)13608;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned short)33976;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
