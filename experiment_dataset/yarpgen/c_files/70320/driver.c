#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4043077345U;
unsigned long long int var_2 = 8971036822957054245ULL;
unsigned int var_5 = 3516559247U;
int var_7 = 1459609122;
unsigned int var_8 = 1451154593U;
short var_9 = (short)-16430;
unsigned int var_11 = 4182707487U;
signed char var_12 = (signed char)-105;
short var_13 = (short)-26955;
int zero = 0;
unsigned short var_14 = (unsigned short)17766;
int var_15 = -1573395000;
_Bool var_16 = (_Bool)0;
int var_17 = 768438279;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-26397;
unsigned long long int var_21 = 8982536509090592560ULL;
unsigned char var_22 = (unsigned char)237;
_Bool var_23 = (_Bool)1;
int var_24 = -1548390941;
unsigned short arr_2 [22] [22] [22] ;
unsigned long long int arr_5 [22] [22] [22] [22] ;
short arr_9 [22] [22] [22] [22] [22] [22] ;
_Bool arr_11 [22] [22] ;
_Bool arr_12 [22] [22] ;
unsigned int arr_19 [14] ;
unsigned long long int arr_10 [22] [22] [22] [22] [22] [22] ;
unsigned short arr_16 [22] [22] ;
_Bool arr_17 [22] ;
long long int arr_27 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)18190;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 5606363701054893887ULL : 12890561781134309307ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)9267;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = 982563819U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 9133620550719931021ULL : 10646379099767697474ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned short)57710;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_27 [i_0] [i_1] = (i_1 % 2 == 0) ? 824552117760061625LL : -701610845347599840LL;
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
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
