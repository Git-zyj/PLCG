#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)117;
long long int var_1 = -4774958964552184216LL;
short var_3 = (short)27653;
int var_10 = 819789470;
unsigned char var_11 = (unsigned char)10;
unsigned int var_13 = 325258628U;
unsigned long long int var_14 = 12129019737255786672ULL;
int zero = 0;
long long int var_15 = -2248477060640638612LL;
unsigned short var_16 = (unsigned short)11647;
short var_17 = (short)-20370;
long long int var_18 = 2571330714282740071LL;
int var_19 = -2105062907;
unsigned short var_20 = (unsigned short)36363;
long long int var_21 = -7204855839047746411LL;
signed char arr_0 [18] ;
long long int arr_1 [18] ;
long long int arr_3 [21] ;
int arr_4 [21] ;
signed char arr_2 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 3084297965944839431LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -995273585335915094LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = -1824596440;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)62;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
