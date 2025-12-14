#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1925618054U;
long long int var_2 = -5610901211656440161LL;
long long int var_3 = 128148496668437689LL;
unsigned int var_4 = 818149708U;
short var_6 = (short)31320;
unsigned short var_9 = (unsigned short)57716;
int zero = 0;
long long int var_10 = 6062936915189166120LL;
_Bool var_11 = (_Bool)1;
short var_12 = (short)29672;
long long int var_13 = 7852160603593841409LL;
long long int var_14 = -8611744617773039038LL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)65092;
unsigned short var_17 = (unsigned short)40792;
long long int var_18 = 566599187969485679LL;
int var_19 = -2081594960;
long long int arr_0 [24] [24] ;
unsigned short arr_1 [24] [24] ;
int arr_2 [24] [24] ;
short arr_4 [18] ;
long long int arr_6 [18] ;
unsigned short arr_3 [24] [24] ;
_Bool arr_8 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? -1927545669066496573LL : -3374001119059872404LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)23503;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? -1418562316 : -1072732336;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (short)-12544;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = -5000837295453900216LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)44512 : (unsigned short)25781;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
