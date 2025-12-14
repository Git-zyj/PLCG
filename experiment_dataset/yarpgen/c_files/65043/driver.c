#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10731824961807976864ULL;
int var_1 = 1068968417;
signed char var_2 = (signed char)71;
unsigned int var_4 = 2403918531U;
signed char var_7 = (signed char)-121;
unsigned int var_8 = 1431865953U;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-21665;
unsigned short var_14 = (unsigned short)19563;
int zero = 0;
signed char var_15 = (signed char)31;
int var_16 = -1876307085;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)137;
long long int var_19 = 7579419649120417168LL;
signed char var_20 = (signed char)7;
unsigned long long int var_21 = 16341604452267192802ULL;
int arr_0 [25] [25] ;
_Bool arr_2 [25] ;
long long int arr_3 [25] ;
unsigned long long int arr_4 [25] ;
int arr_8 [25] [25] ;
long long int arr_10 [25] ;
signed char arr_6 [25] ;
unsigned short arr_7 [25] [25] ;
_Bool arr_11 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = -1916147551;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -7122173670692364351LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 2814729903000922749ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = 728996095;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = 8430247006460941612LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)62348;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
