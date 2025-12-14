#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)18;
unsigned int var_2 = 256004757U;
signed char var_5 = (signed char)123;
signed char var_8 = (signed char)-115;
long long int var_10 = 1317788580990008764LL;
short var_13 = (short)1360;
int zero = 0;
unsigned short var_14 = (unsigned short)44951;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)18;
unsigned short var_17 = (unsigned short)12997;
long long int arr_1 [21] [21] ;
signed char arr_2 [21] ;
long long int arr_3 [21] [21] ;
signed char arr_7 [22] ;
unsigned short arr_8 [22] ;
long long int arr_4 [21] [21] ;
_Bool arr_5 [21] [21] ;
unsigned short arr_6 [21] [21] [21] ;
unsigned long long int arr_9 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? -1647854738210825360LL : -6626331853873312493LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-3 : (signed char)-46;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 6208599730691146007LL : -1495580415556015065LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (unsigned short)58514;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -5769414014507903551LL : -6194932116565692130LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)54335 : (unsigned short)28812;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = 14440315660379787927ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
