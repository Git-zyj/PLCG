#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -181581482276577714LL;
unsigned int var_2 = 1360465282U;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 17342150123411860582ULL;
unsigned long long int var_5 = 16970453640153324029ULL;
short var_8 = (short)-9987;
unsigned int var_9 = 3225523317U;
unsigned int var_12 = 623607410U;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned short arr_0 [15] ;
unsigned long long int arr_1 [15] ;
long long int arr_2 [15] ;
short arr_3 [15] ;
unsigned long long int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)43197;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 10959938942472185116ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 8399396344343323425LL : -8966781697061603785LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)3550 : (short)2111;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 12773753343289078571ULL : 6984113249479340289ULL;
}

void checksum() {
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
