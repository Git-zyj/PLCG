#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10475343972280267956ULL;
_Bool var_4 = (_Bool)0;
long long int var_5 = -1723005264788007757LL;
unsigned int var_7 = 1217399470U;
long long int var_10 = -943554983534269353LL;
unsigned char var_11 = (unsigned char)16;
unsigned int var_13 = 1495714112U;
unsigned long long int var_14 = 14980367313876494689ULL;
signed char var_17 = (signed char)-6;
int zero = 0;
short var_18 = (short)5911;
short var_19 = (short)-23022;
unsigned int var_20 = 3825450476U;
short var_21 = (short)18617;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 15974450741253999160ULL;
unsigned int arr_0 [11] ;
_Bool arr_1 [11] ;
unsigned char arr_2 [11] ;
long long int arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 2004022308U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)205 : (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? -3637160023716559627LL : -3221194546826352118LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
