#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-37;
unsigned short var_2 = (unsigned short)58359;
unsigned int var_3 = 1916860866U;
long long int var_4 = -1889823433214674295LL;
unsigned long long int var_5 = 17827711099536718008ULL;
unsigned char var_6 = (unsigned char)125;
short var_7 = (short)17778;
unsigned char var_8 = (unsigned char)244;
unsigned short var_9 = (unsigned short)28691;
int zero = 0;
unsigned int var_10 = 1330714207U;
unsigned long long int var_11 = 13700283060198908307ULL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 7384813724767461431ULL;
int var_14 = 211184472;
unsigned long long int var_15 = 591599528830152684ULL;
int var_16 = 457405132;
long long int var_17 = 4331276230866295259LL;
short arr_0 [19] ;
unsigned int arr_1 [19] [19] ;
unsigned short arr_4 [23] [23] ;
long long int arr_5 [23] ;
unsigned short arr_6 [23] ;
unsigned short arr_8 [23] ;
signed char arr_9 [23] [23] ;
short arr_10 [23] ;
long long int arr_11 [23] ;
unsigned short arr_2 [19] ;
unsigned short arr_3 [19] ;
unsigned char arr_7 [23] ;
unsigned char arr_14 [23] ;
short arr_15 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)25246;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 3065355824U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)640 : (unsigned short)2089;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -7644112728675650087LL : 5622062651035021374LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned short)21782;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)48804 : (unsigned short)34348;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (short)21676;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 8990485843650977549LL : 8670019236176631961LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)58473;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)4584;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)103 : (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)152 : (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-23620 : (short)-13596;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
