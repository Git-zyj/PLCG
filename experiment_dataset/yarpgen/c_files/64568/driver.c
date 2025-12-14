#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14062783627224863068ULL;
int var_5 = 1734398228;
unsigned short var_7 = (unsigned short)8923;
unsigned long long int var_12 = 15392238707520150330ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)22726;
signed char var_17 = (signed char)36;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)57801;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 13241028873332696268ULL;
unsigned char var_22 = (unsigned char)25;
unsigned long long int var_23 = 9281941098690421035ULL;
int arr_0 [19] ;
_Bool arr_1 [19] ;
int arr_2 [19] [19] ;
long long int arr_3 [19] [19] [19] ;
unsigned short arr_5 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 46991813;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 937787250;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -8830447477785361576LL : -4331751337071119156LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)24600 : (unsigned short)56644;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
