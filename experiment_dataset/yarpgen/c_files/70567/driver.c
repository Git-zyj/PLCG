#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5058369155822818116LL;
long long int var_1 = 2945735688319145374LL;
unsigned char var_7 = (unsigned char)200;
int var_8 = -1743774629;
unsigned short var_9 = (unsigned short)63850;
unsigned int var_11 = 1174358409U;
_Bool var_12 = (_Bool)1;
long long int var_13 = 6761600662106180895LL;
long long int var_14 = 32926688400652579LL;
unsigned int var_16 = 1822036471U;
int zero = 0;
long long int var_17 = -8196379426811769497LL;
signed char var_18 = (signed char)68;
unsigned int var_19 = 2128558211U;
unsigned char var_20 = (unsigned char)179;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 1665879828U;
unsigned int var_23 = 701551447U;
signed char var_24 = (signed char)105;
unsigned char var_25 = (unsigned char)202;
int var_26 = 2019026208;
int var_27 = 137227388;
unsigned char var_28 = (unsigned char)114;
signed char var_29 = (signed char)74;
unsigned char arr_0 [19] ;
unsigned char arr_1 [19] ;
int arr_2 [19] [19] ;
_Bool arr_4 [13] ;
int arr_12 [13] [13] [13] [13] ;
unsigned int arr_13 [23] ;
unsigned char arr_14 [23] [23] ;
unsigned long long int arr_15 [23] ;
_Bool arr_16 [23] [23] [23] ;
long long int arr_17 [23] [23] [23] [23] ;
unsigned long long int arr_18 [23] [23] [23] ;
int arr_19 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = -1179134889;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -388618364 : -1758312931;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = 2228577858U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = 11633437163139183131ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = -5373848625428479156LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 13855725746519886779ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = 1299037277;
}

void checksum() {
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
