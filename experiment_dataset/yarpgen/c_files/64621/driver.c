#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)115;
_Bool var_1 = (_Bool)0;
long long int var_2 = -3370535022831868317LL;
signed char var_5 = (signed char)81;
long long int var_6 = 6342286346195876492LL;
signed char var_7 = (signed char)41;
unsigned long long int var_9 = 3970694531826541911ULL;
unsigned short var_11 = (unsigned short)26551;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = -223765165;
signed char var_16 = (signed char)82;
int var_17 = 1425306522;
unsigned long long int var_18 = 9131998291306569867ULL;
unsigned long long int arr_0 [22] ;
unsigned char arr_1 [22] ;
long long int arr_2 [22] ;
long long int arr_4 [10] ;
int arr_5 [10] [10] ;
unsigned int arr_3 [22] ;
_Bool arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 2002713986496722411ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 6764763434222283324LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = -4472522206809730834LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = -1025501530;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 3395121475U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
