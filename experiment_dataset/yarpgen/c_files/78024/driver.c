#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1879868858U;
long long int var_3 = 8541939875668174248LL;
int var_5 = 275060830;
unsigned int var_6 = 493133499U;
long long int var_7 = 9128609164855513368LL;
unsigned char var_8 = (unsigned char)117;
unsigned char var_9 = (unsigned char)47;
short var_10 = (short)13083;
long long int var_11 = 1298188518652063898LL;
short var_12 = (short)-13268;
short var_13 = (short)-15755;
signed char var_15 = (signed char)-48;
int zero = 0;
long long int var_16 = 7341255756694326154LL;
short var_17 = (short)13450;
long long int var_18 = 2592744917471760294LL;
_Bool arr_1 [12] ;
short arr_2 [12] ;
int arr_3 [12] ;
short arr_4 [12] [12] [12] ;
int arr_6 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)-1250;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 1378476361;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-19073;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1380173701 : -1130462780;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
