#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1726299518497889716ULL;
signed char var_8 = (signed char)-61;
unsigned short var_9 = (unsigned short)9491;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)22;
unsigned long long int var_13 = 7773156927626850250ULL;
unsigned short var_14 = (unsigned short)36252;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 2016057767U;
signed char var_17 = (signed char)-16;
unsigned char var_18 = (unsigned char)252;
int var_19 = 1060603674;
unsigned long long int var_20 = 13878153341660417218ULL;
long long int var_21 = -5837867202307419373LL;
unsigned long long int var_22 = 9125295769183993569ULL;
short var_23 = (short)15572;
unsigned int var_24 = 3393245561U;
int arr_1 [18] [18] ;
short arr_2 [18] [18] ;
short arr_3 [18] [18] ;
int arr_6 [18] [18] [18] [18] [18] [18] ;
unsigned int arr_7 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 375468757;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (short)25060;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)2039 : (short)-15930;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_6 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1372569796;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 4022672481U : 2206198910U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
