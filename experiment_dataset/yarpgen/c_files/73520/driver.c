#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4580150724946344730ULL;
short var_1 = (short)-25575;
unsigned char var_5 = (unsigned char)159;
unsigned long long int var_7 = 323844060429196957ULL;
unsigned long long int var_8 = 15355666923668391033ULL;
long long int var_11 = -6348508652219280486LL;
unsigned char var_13 = (unsigned char)108;
unsigned int var_14 = 2021757269U;
int zero = 0;
signed char var_15 = (signed char)53;
long long int var_16 = 1696892436950534995LL;
unsigned char var_17 = (unsigned char)206;
unsigned int var_18 = 2446120623U;
int var_19 = 1113574123;
unsigned short var_20 = (unsigned short)32873;
long long int var_21 = -8706835600331244122LL;
short arr_0 [18] ;
unsigned char arr_8 [18] [18] [18] [18] ;
unsigned int arr_12 [18] ;
unsigned char arr_14 [18] [18] [18] ;
short arr_9 [18] [18] ;
unsigned long long int arr_19 [18] ;
unsigned long long int arr_23 [18] [18] ;
unsigned short arr_24 [18] ;
short arr_25 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)-6845;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = 3227583692U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-7043;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = 14560141827840037388ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_23 [i_0] [i_1] = 9822872204135826213ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_24 [i_0] = (unsigned short)20460;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_25 [i_0] [i_1] = (short)21491;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
