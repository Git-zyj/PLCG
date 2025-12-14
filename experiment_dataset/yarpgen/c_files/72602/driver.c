#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1685715262;
short var_2 = (short)-14620;
signed char var_3 = (signed char)61;
unsigned long long int var_4 = 11279242850271884491ULL;
int var_5 = 448090733;
unsigned char var_6 = (unsigned char)77;
short var_7 = (short)31872;
unsigned char var_9 = (unsigned char)235;
unsigned int var_10 = 1805974793U;
int zero = 0;
unsigned long long int var_11 = 17587792193765674386ULL;
short var_12 = (short)1452;
unsigned char var_13 = (unsigned char)192;
short var_14 = (short)17628;
unsigned long long int var_15 = 2725762082165056221ULL;
short var_16 = (short)-20514;
unsigned int arr_2 [21] [21] ;
unsigned char arr_6 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 33825565U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)27;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
