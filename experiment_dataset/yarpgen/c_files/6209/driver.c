#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)97;
unsigned short var_2 = (unsigned short)47575;
int var_6 = 1128814235;
unsigned long long int var_7 = 10327594427428875970ULL;
long long int var_10 = -8625766723967916370LL;
unsigned short var_11 = (unsigned short)2221;
int zero = 0;
unsigned short var_12 = (unsigned short)49118;
unsigned long long int var_13 = 3511871096777295180ULL;
unsigned short var_14 = (unsigned short)5309;
unsigned short var_15 = (unsigned short)16534;
int var_16 = -1094995966;
unsigned short var_17 = (unsigned short)40170;
long long int var_18 = -5876903717725324019LL;
unsigned short var_19 = (unsigned short)2194;
long long int var_20 = -2047946506642860430LL;
long long int var_21 = 3806097176656482192LL;
unsigned long long int arr_0 [23] [23] ;
long long int arr_1 [23] ;
unsigned short arr_4 [23] [23] ;
int arr_5 [23] ;
unsigned int arr_7 [23] ;
unsigned long long int arr_2 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 15513848839538848139ULL : 7261786597442820029ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -4349009537800400423LL : -6947650914061477210LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)62432 : (unsigned short)44916;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -1488566384 : -1384532123;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 1206247959U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 10196518727372479944ULL : 15757145353555493908ULL;
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
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
