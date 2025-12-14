#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -56353497935550219LL;
unsigned short var_3 = (unsigned short)59118;
_Bool var_5 = (_Bool)0;
unsigned short var_9 = (unsigned short)43137;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 15476188068355354056ULL;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2133984609U;
unsigned short arr_0 [15] [15] ;
unsigned long long int arr_4 [15] ;
unsigned long long int arr_9 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)2533;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 14004624922947530182ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 9836578708814691780ULL : 11959888627015739911ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
