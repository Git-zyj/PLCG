#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-110;
long long int var_2 = 4364393458191272135LL;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 4251722560U;
unsigned int var_5 = 2406857905U;
unsigned short var_8 = (unsigned short)2447;
int var_10 = -1798977961;
unsigned long long int var_11 = 7001983904988249875ULL;
int zero = 0;
int var_12 = -261944673;
unsigned int var_13 = 3092302964U;
int var_14 = 461125757;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)47825;
long long int var_17 = -8178271749457654825LL;
unsigned long long int var_18 = 4875734695905508735ULL;
unsigned short var_19 = (unsigned short)25354;
long long int arr_0 [20] ;
unsigned long long int arr_2 [20] ;
signed char arr_3 [20] ;
unsigned int arr_4 [11] [11] ;
unsigned short arr_5 [11] ;
long long int arr_6 [11] [11] ;
int arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 35808193265806883LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 3751040048060817018ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (signed char)-61;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 2021652836U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned short)58812;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = -8709760954566743439LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = -1326967934;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
