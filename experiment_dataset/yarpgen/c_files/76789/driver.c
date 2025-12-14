#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-79;
long long int var_3 = 8468591407682280634LL;
long long int var_4 = 75057085412339717LL;
signed char var_5 = (signed char)87;
unsigned int var_6 = 588044075U;
int var_7 = 577878388;
int var_8 = 1603570338;
long long int var_9 = -8997313711541127595LL;
int zero = 0;
unsigned int var_10 = 3746499392U;
int var_11 = -374159512;
unsigned short var_12 = (unsigned short)38318;
int var_13 = -1494438249;
int var_14 = 1454248489;
short var_15 = (short)27702;
signed char arr_7 [25] [25] [25] ;
int arr_8 [25] ;
long long int arr_3 [16] ;
int arr_4 [16] ;
long long int arr_9 [25] ;
long long int arr_13 [25] [25] ;
signed char arr_17 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 2056319417;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 2519639317822148590LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -779749707;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = -3634451658420579120LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = 5776796240023433606LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = (signed char)86;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
