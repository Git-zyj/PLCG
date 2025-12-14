#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57147;
long long int var_3 = -2643820594579092713LL;
unsigned int var_7 = 792070883U;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)83;
long long int var_12 = 5131966807411248682LL;
unsigned char var_13 = (unsigned char)59;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 12259329218064066931ULL;
long long int var_19 = -2874755274152624141LL;
long long int var_20 = -137297550640000326LL;
long long int var_21 = -8771332905638139367LL;
unsigned int var_22 = 2595211921U;
unsigned int arr_0 [23] ;
signed char arr_1 [23] ;
unsigned long long int arr_2 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 3461140201U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 3465845103145930395ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
