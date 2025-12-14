#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -760354856;
unsigned long long int var_1 = 4708334058738993598ULL;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-5440;
short var_5 = (short)10752;
unsigned long long int var_6 = 6910803369042924983ULL;
short var_7 = (short)15882;
unsigned short var_8 = (unsigned short)54528;
unsigned char var_9 = (unsigned char)182;
long long int var_10 = 6219327791983906025LL;
unsigned char var_11 = (unsigned char)114;
unsigned short var_13 = (unsigned short)18663;
signed char var_15 = (signed char)27;
unsigned long long int var_16 = 16060020447289989813ULL;
int zero = 0;
short var_17 = (short)2102;
long long int var_18 = 1944394636358910362LL;
unsigned char var_19 = (unsigned char)64;
signed char var_20 = (signed char)44;
int var_21 = -122732697;
unsigned long long int var_22 = 10182128627237395090ULL;
int var_23 = -149073045;
long long int var_24 = -3521704760962633414LL;
_Bool arr_0 [20] [20] ;
_Bool arr_1 [20] [20] ;
_Bool arr_2 [20] ;
unsigned short arr_5 [15] ;
unsigned long long int arr_6 [15] ;
unsigned long long int arr_3 [20] [20] ;
_Bool arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned short)23625;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 15098164458218008106ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 12733466593663984368ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
