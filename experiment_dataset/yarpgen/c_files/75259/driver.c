#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -134025994196649096LL;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
long long int var_5 = 2278493336358260530LL;
long long int var_7 = 4890646602387277143LL;
unsigned int var_8 = 1239896752U;
int var_9 = -1577744954;
long long int var_10 = 3324174072035713606LL;
long long int var_11 = 704216908395016872LL;
unsigned long long int var_15 = 4375123482210734873ULL;
int zero = 0;
long long int var_19 = -8904543333150425822LL;
unsigned int var_20 = 1528124575U;
unsigned long long int var_21 = 8084266946132167591ULL;
unsigned long long int var_22 = 13798882732080495630ULL;
long long int var_23 = -1650076595079724907LL;
_Bool var_24 = (_Bool)1;
short var_25 = (short)-19998;
unsigned int var_26 = 1705815360U;
long long int arr_1 [23] [23] ;
unsigned long long int arr_7 [23] [23] [23] ;
long long int arr_9 [23] [23] [23] [23] ;
long long int arr_5 [23] [23] [23] ;
unsigned int arr_11 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 2727355256669353267LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 4372223633576787941ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -4251526531661518270LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1691519890783761627LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = 4117509043U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
