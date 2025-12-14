#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-7191;
long long int var_6 = -6081639446701074818LL;
int var_8 = 1011486751;
long long int var_9 = 2465794847203057154LL;
unsigned int var_10 = 1501356992U;
int zero = 0;
long long int var_11 = 1546000697296909790LL;
unsigned long long int var_12 = 1380351700907874011ULL;
long long int var_13 = -2154455218594495665LL;
int var_14 = -821866318;
int var_15 = 2073440055;
_Bool var_16 = (_Bool)0;
int arr_4 [12] ;
unsigned int arr_5 [12] ;
unsigned int arr_6 [12] ;
unsigned int arr_8 [12] [12] [12] [12] ;
short arr_9 [12] [12] [12] [12] ;
int arr_14 [12] [12] [12] [12] ;
unsigned int arr_17 [12] ;
unsigned short arr_19 [12] ;
unsigned short arr_20 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -283886021 : 415032105;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 1247994633U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 3102416709U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1519992470U : 1587490118U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)-6694;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = -936156996;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 3507591442U : 2722129944U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (unsigned short)47834 : (unsigned short)44369;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)28388 : (unsigned short)54960;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
