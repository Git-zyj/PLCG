#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned long long int var_8 = 3666161817136789718ULL;
long long int var_11 = -690224907145320777LL;
unsigned long long int var_13 = 10158511807246032757ULL;
unsigned short var_14 = (unsigned short)33357;
int zero = 0;
long long int var_15 = 4776459969505822384LL;
_Bool var_16 = (_Bool)1;
int var_17 = -308732533;
unsigned short var_18 = (unsigned short)45034;
unsigned long long int var_19 = 12440206143492743056ULL;
unsigned long long int var_20 = 7286858054770896075ULL;
unsigned long long int arr_1 [10] ;
long long int arr_8 [20] ;
int arr_2 [10] ;
unsigned short arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 11773047237224175186ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 447889574407838425LL : -2284294246037961635LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 347180763 : -1809088639;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)60288 : (unsigned short)1343;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
