#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1831084766;
_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)59585;
unsigned long long int var_4 = 11071710202255877604ULL;
signed char var_6 = (signed char)63;
unsigned char var_7 = (unsigned char)213;
int var_10 = 997773434;
signed char var_11 = (signed char)4;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 16340738056715833373ULL;
unsigned short var_14 = (unsigned short)34589;
unsigned long long int var_15 = 11036061889057510168ULL;
unsigned short var_16 = (unsigned short)31593;
unsigned long long int var_17 = 11194607976587844100ULL;
unsigned short var_18 = (unsigned short)12006;
int var_19 = 54604868;
unsigned short var_20 = (unsigned short)29859;
unsigned short var_21 = (unsigned short)7935;
unsigned short arr_0 [17] [17] ;
unsigned char arr_2 [17] [17] ;
signed char arr_3 [17] ;
unsigned short arr_4 [17] ;
int arr_10 [17] ;
unsigned long long int arr_13 [13] [13] ;
signed char arr_12 [17] [17] [17] [17] ;
unsigned int arr_16 [13] ;
_Bool arr_23 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)22236;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned short)11500;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = -595358200;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = 15277777758697733417ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-5 : (signed char)-124;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = 2266827068U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_23 [i_0] = (_Bool)0;
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
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
