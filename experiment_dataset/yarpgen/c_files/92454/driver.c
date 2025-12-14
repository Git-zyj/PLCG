#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8401744621174812217ULL;
unsigned short var_1 = (unsigned short)8159;
unsigned long long int var_2 = 5608744074601478889ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 14578861442065366585ULL;
unsigned int var_5 = 3399332423U;
unsigned long long int var_6 = 12330617033354684078ULL;
int var_9 = -354489037;
int var_10 = -1671063838;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 7406210169959470896ULL;
signed char var_13 = (signed char)-31;
signed char var_14 = (signed char)-12;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 14657440860797447065ULL;
unsigned long long int var_18 = 10688728005206078059ULL;
unsigned long long int arr_1 [25] [25] ;
long long int arr_8 [25] ;
unsigned long long int arr_10 [25] [25] [25] [25] ;
unsigned long long int arr_7 [25] [25] [25] [25] ;
unsigned long long int arr_16 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 16043361911541135001ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 6439256838339258905LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 1042601010962709898ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 6733402979161481193ULL : 15560980294543582126ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_16 [i_0] [i_1] = 11171306813613451054ULL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
