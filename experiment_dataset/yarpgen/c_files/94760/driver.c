#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -329888635;
unsigned int var_5 = 2448258905U;
unsigned char var_6 = (unsigned char)127;
signed char var_11 = (signed char)50;
int zero = 0;
unsigned int var_12 = 2791097940U;
unsigned long long int var_13 = 16263302017911810367ULL;
unsigned long long int var_14 = 17689885802345490632ULL;
unsigned char var_15 = (unsigned char)27;
int var_16 = -412547113;
signed char var_17 = (signed char)31;
unsigned int var_18 = 3016692785U;
unsigned int var_19 = 3813776644U;
unsigned long long int arr_0 [14] ;
unsigned long long int arr_1 [14] ;
unsigned long long int arr_2 [14] [14] ;
unsigned char arr_5 [24] ;
unsigned long long int arr_6 [24] ;
unsigned int arr_9 [23] ;
unsigned long long int arr_11 [23] [23] ;
int arr_13 [23] [23] [23] [23] ;
unsigned long long int arr_4 [14] ;
unsigned long long int arr_16 [23] ;
unsigned char arr_17 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 18274867801384615956ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 2110204565465425079ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 4610187865504984370ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 2128586501018097394ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 1681627995U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = 12085677241067861456ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = -2059229315;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 8415031327090621674ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 3073531237277502840ULL : 4380183059655241830ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned char)202 : (unsigned char)252;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
