#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61115;
signed char var_4 = (signed char)100;
unsigned short var_7 = (unsigned short)33391;
unsigned long long int var_8 = 18207426828194003258ULL;
long long int var_10 = -742797467228996979LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)85;
unsigned int var_21 = 533496836U;
unsigned long long int var_22 = 4031821559305799930ULL;
long long int var_23 = -6745635647054024826LL;
signed char var_24 = (signed char)33;
signed char arr_0 [19] ;
signed char arr_4 [24] [24] ;
long long int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)-100;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)100 : (signed char)46;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -4371702905022993707LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
