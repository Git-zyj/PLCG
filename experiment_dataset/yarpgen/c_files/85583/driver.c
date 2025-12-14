#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1766517048;
unsigned long long int var_4 = 7697186459831342495ULL;
short var_6 = (short)-18250;
unsigned char var_7 = (unsigned char)109;
unsigned short var_11 = (unsigned short)19402;
short var_14 = (short)-12241;
unsigned char var_15 = (unsigned char)238;
int zero = 0;
long long int var_18 = -7049159381639472300LL;
unsigned long long int var_19 = 7401328679524488926ULL;
int var_20 = -1186797928;
short var_21 = (short)-6826;
int var_22 = 1806676702;
long long int var_23 = 3545697115784064190LL;
int arr_2 [24] [24] ;
_Bool arr_5 [21] [21] ;
unsigned long long int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = -1302733222;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 135633494197196077ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
