#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8177763815483567799LL;
unsigned long long int var_5 = 16096187622750429055ULL;
long long int var_6 = 2465748120037517199LL;
unsigned short var_8 = (unsigned short)2165;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 7587051920585552555ULL;
unsigned long long int var_13 = 5791017184200951453ULL;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2382208292U;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 1963659662U;
unsigned short var_18 = (unsigned short)54019;
signed char var_19 = (signed char)62;
unsigned char arr_2 [21] ;
short arr_3 [21] ;
signed char arr_4 [21] [21] [21] ;
unsigned char arr_5 [21] [21] ;
unsigned short arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)22798 : (short)7056;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)167 : (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)33594 : (unsigned short)6104;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
