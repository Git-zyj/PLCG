#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -51549835;
_Bool var_1 = (_Bool)1;
signed char var_5 = (signed char)99;
signed char var_7 = (signed char)-54;
unsigned char var_9 = (unsigned char)159;
unsigned long long int var_11 = 377099018175884020ULL;
unsigned short var_12 = (unsigned short)44343;
unsigned short var_13 = (unsigned short)34854;
signed char var_14 = (signed char)110;
unsigned char var_15 = (unsigned char)215;
unsigned int var_16 = 2709154010U;
int zero = 0;
signed char var_20 = (signed char)82;
long long int var_21 = -9186170814025565935LL;
short var_22 = (short)19202;
long long int var_23 = -7121071906698272490LL;
long long int var_24 = 1863767455759837982LL;
unsigned int var_25 = 978410831U;
_Bool var_26 = (_Bool)1;
_Bool arr_0 [22] [22] ;
int arr_1 [22] [22] ;
unsigned short arr_4 [22] ;
unsigned char arr_2 [22] [22] ;
signed char arr_5 [22] ;
short arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 811253397;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned short)45307;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (signed char)-17;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (short)-6653;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
