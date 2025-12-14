#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7940968320872444524LL;
long long int var_1 = 4668529965184437352LL;
signed char var_2 = (signed char)46;
_Bool var_3 = (_Bool)1;
short var_4 = (short)25556;
int var_8 = -1312177624;
int var_9 = 376713172;
_Bool var_12 = (_Bool)0;
long long int var_14 = 2188323059839386519LL;
int zero = 0;
short var_17 = (short)29306;
unsigned int var_18 = 2054685674U;
short var_19 = (short)22027;
long long int var_20 = -8158662683890219146LL;
int var_21 = -917902993;
unsigned long long int arr_0 [12] [12] ;
long long int arr_2 [12] ;
_Bool arr_6 [12] [12] ;
_Bool arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 12078308108225362377ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -4186051300176689502LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
