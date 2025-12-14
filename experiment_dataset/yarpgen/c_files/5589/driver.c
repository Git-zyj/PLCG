#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_5 = -6115079327829781426LL;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 4637983836748257265ULL;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 3556027757U;
long long int var_19 = -8149957134786972423LL;
int zero = 0;
short var_20 = (short)-31356;
unsigned long long int var_21 = 3378732176204055423ULL;
short var_22 = (short)-1798;
long long int var_23 = -4741505895527857912LL;
unsigned short var_24 = (unsigned short)7755;
_Bool var_25 = (_Bool)1;
unsigned long long int var_26 = 12519157271056174823ULL;
unsigned long long int var_27 = 10778433454033581058ULL;
_Bool var_28 = (_Bool)1;
_Bool arr_1 [17] ;
_Bool arr_2 [17] ;
long long int arr_3 [20] ;
long long int arr_4 [20] ;
_Bool arr_5 [20] ;
_Bool arr_8 [20] ;
unsigned long long int arr_9 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -5527088762085212433LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 5210037693562537710LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = 5640453745018121987ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
