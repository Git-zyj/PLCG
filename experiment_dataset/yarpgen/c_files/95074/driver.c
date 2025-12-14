#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2423327242287662178LL;
long long int var_2 = 3291644694457999912LL;
unsigned char var_3 = (unsigned char)208;
unsigned int var_6 = 3121009632U;
short var_8 = (short)-14579;
unsigned short var_9 = (unsigned short)23345;
unsigned short var_10 = (unsigned short)25075;
unsigned short var_14 = (unsigned short)2557;
unsigned long long int var_15 = 12564523648399275068ULL;
int zero = 0;
int var_17 = -1017555147;
unsigned int var_18 = 1238384774U;
int var_19 = 421424825;
long long int var_20 = -4214588909768178537LL;
_Bool var_21 = (_Bool)0;
short arr_8 [20] ;
int arr_9 [20] ;
int arr_12 [20] [20] [20] [20] [20] ;
short arr_15 [20] [20] [20] [20] ;
short arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (short)31050;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = 426405066;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = -486344111;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (short)-28579;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)-6748 : (short)-14709;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
