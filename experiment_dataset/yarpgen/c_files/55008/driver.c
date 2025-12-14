#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2562821728097938207ULL;
short var_1 = (short)-11266;
int var_2 = -554417395;
long long int var_3 = -87190895412321974LL;
short var_4 = (short)26930;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)21413;
signed char var_7 = (signed char)126;
unsigned long long int var_8 = 13416133131959284492ULL;
unsigned long long int var_9 = 9421177257226073561ULL;
signed char var_10 = (signed char)22;
unsigned short var_11 = (unsigned short)28090;
int zero = 0;
int var_12 = -838930665;
unsigned short var_13 = (unsigned short)64632;
short var_14 = (short)1529;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
long long int var_17 = 8170051651189317330LL;
unsigned long long int var_18 = 8893359502989898031ULL;
int var_19 = 1686417842;
short var_20 = (short)-7708;
unsigned short var_21 = (unsigned short)44676;
unsigned long long int var_22 = 13473819880303807247ULL;
unsigned long long int var_23 = 13978744802206118112ULL;
int var_24 = 1222755933;
unsigned int var_25 = 482045501U;
_Bool var_26 = (_Bool)0;
unsigned char arr_3 [23] [23] ;
long long int arr_6 [17] ;
short arr_7 [17] ;
signed char arr_15 [24] ;
short arr_16 [24] ;
signed char arr_17 [24] ;
_Bool arr_2 [21] ;
unsigned short arr_8 [17] ;
int arr_11 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 7409924852005474072LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (short)7478;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = (short)26607;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = (signed char)-96;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (unsigned short)15491;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = -2122243147;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
