#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1434953700004364451LL;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-4;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
long long int var_5 = 3638967245200025677LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 14074662738225754891ULL;
unsigned long long int var_8 = 6914040431289408437ULL;
_Bool var_10 = (_Bool)0;
int var_12 = -1598295688;
unsigned long long int var_13 = 12863896412004870283ULL;
int zero = 0;
unsigned long long int var_14 = 8765193299907661448ULL;
unsigned short var_15 = (unsigned short)47619;
_Bool var_16 = (_Bool)0;
int var_17 = 830092147;
_Bool arr_4 [17] ;
int arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 2053221081;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
