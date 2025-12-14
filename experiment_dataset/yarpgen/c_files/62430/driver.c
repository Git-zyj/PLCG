#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12074206295947101645ULL;
int var_2 = 2078193935;
int var_8 = 1707801146;
long long int var_10 = -2799724319501355070LL;
unsigned long long int var_12 = 11479023990568634208ULL;
unsigned long long int var_13 = 16394154153040637791ULL;
unsigned long long int var_14 = 17900021075510472574ULL;
int var_17 = -1095720594;
unsigned long long int var_18 = 7333113269963633766ULL;
int zero = 0;
long long int var_20 = -8139810128868919480LL;
long long int var_21 = -9041772145263973346LL;
unsigned long long int var_22 = 16925560968284691559ULL;
unsigned long long int var_23 = 1848513599008686939ULL;
unsigned long long int var_24 = 17268995637965789980ULL;
int arr_0 [12] [12] ;
unsigned long long int arr_4 [12] ;
unsigned long long int arr_5 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = -1751289838;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 15530575863394427930ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3407407271887843907ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
