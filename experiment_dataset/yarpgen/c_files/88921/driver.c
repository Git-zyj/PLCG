#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11496322454746682426ULL;
signed char var_2 = (signed char)-74;
_Bool var_6 = (_Bool)0;
long long int var_7 = -5650658505560566398LL;
long long int var_11 = -1219728049001419374LL;
int var_13 = 845751254;
int zero = 0;
long long int var_14 = 6097650102122599234LL;
unsigned int var_15 = 2463585355U;
unsigned int var_16 = 348778950U;
long long int var_17 = -5297089049301553560LL;
short var_18 = (short)8584;
long long int arr_0 [11] ;
unsigned int arr_1 [11] ;
unsigned short arr_2 [11] ;
unsigned char arr_3 [11] ;
unsigned int arr_4 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 7304356285257194899LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 3110990707U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)33139;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)155 : (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1628489725U : 1740307164U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
