#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10859155325288391938ULL;
signed char var_5 = (signed char)42;
_Bool var_7 = (_Bool)1;
long long int var_8 = 3004173326243864365LL;
unsigned short var_9 = (unsigned short)60628;
signed char var_14 = (signed char)45;
int zero = 0;
unsigned int var_15 = 1968990618U;
int var_16 = 30333276;
short var_17 = (short)27846;
signed char var_18 = (signed char)40;
int var_19 = 668842893;
signed char var_20 = (signed char)-5;
_Bool var_21 = (_Bool)0;
int var_22 = 1875773184;
short var_23 = (short)-26962;
unsigned long long int var_24 = 5581216516325392524ULL;
signed char var_25 = (signed char)92;
unsigned long long int arr_1 [14] [14] ;
unsigned short arr_3 [14] [14] [14] ;
unsigned int arr_4 [14] [14] ;
unsigned short arr_5 [14] [14] ;
short arr_7 [14] [14] [14] [14] ;
signed char arr_11 [14] [14] [14] ;
signed char arr_13 [16] ;
unsigned short arr_14 [16] ;
unsigned int arr_18 [16] [16] ;
short arr_22 [19] ;
int arr_23 [19] ;
signed char arr_12 [14] ;
long long int arr_15 [16] ;
unsigned int arr_20 [16] [16] [16] ;
int arr_21 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 2127959593584237137ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)30346;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 2558725863U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)31951;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (short)-25376;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (unsigned short)37861;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_18 [i_0] [i_1] = 3255085613U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_22 [i_0] = (short)21215;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 1492104825 : -1217540856;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (signed char)-82;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = 1417197030694519340LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 5468981U : 3104124572U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? -1904065632 : -115848816;
}

void checksum() {
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
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
