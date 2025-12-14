#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)145;
long long int var_2 = 7579253335308132544LL;
unsigned long long int var_3 = 4691386831609959395ULL;
int var_4 = 1311233626;
unsigned short var_5 = (unsigned short)23598;
unsigned short var_6 = (unsigned short)59353;
long long int var_8 = -5816721629981087623LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)-53;
unsigned int var_12 = 2380341293U;
unsigned long long int var_13 = 16093082592030582988ULL;
unsigned short var_14 = (unsigned short)7665;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 9868365766635172950ULL;
unsigned long long int var_17 = 11216733373092721412ULL;
unsigned char var_18 = (unsigned char)166;
signed char arr_0 [17] [17] ;
unsigned char arr_1 [17] ;
int arr_2 [17] [17] ;
int arr_3 [17] ;
unsigned char arr_6 [10] [10] ;
unsigned short arr_8 [10] ;
int arr_14 [10] ;
unsigned long long int arr_4 [17] ;
short arr_9 [10] ;
unsigned short arr_10 [10] ;
long long int arr_15 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = -1409866837;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -564327879;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)49345 : (unsigned short)25830;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = 58542740;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 15642218507411704691ULL : 2142352813492482670ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)16487 : (short)-293;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)40005 : (unsigned short)17232;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = -2882977964749027894LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
