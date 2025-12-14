#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -262603110;
unsigned int var_1 = 2080995040U;
long long int var_2 = -5203065357279068864LL;
unsigned short var_3 = (unsigned short)25997;
int var_5 = 116324830;
short var_7 = (short)15246;
long long int var_8 = -3429118889143181920LL;
short var_17 = (short)22820;
int zero = 0;
unsigned short var_18 = (unsigned short)35296;
unsigned long long int var_19 = 495216789105666455ULL;
short var_20 = (short)24928;
short var_21 = (short)-17385;
int var_22 = 1627320923;
signed char var_23 = (signed char)-32;
int var_24 = -746202423;
long long int arr_2 [15] ;
long long int arr_3 [15] [15] ;
unsigned char arr_8 [19] ;
short arr_9 [19] ;
signed char arr_10 [19] [19] ;
unsigned long long int arr_11 [19] [19] [19] ;
unsigned int arr_7 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -2837340950563275131LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 6831664620991040323LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (short)-2115;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 2440734133539962146ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 1675025035U : 3457004643U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
