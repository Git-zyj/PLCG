#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26824;
short var_2 = (short)-8425;
long long int var_4 = 8117494859749002615LL;
unsigned long long int var_5 = 16280566675990662044ULL;
unsigned short var_7 = (unsigned short)51415;
short var_8 = (short)31064;
unsigned long long int var_9 = 6455839381109236498ULL;
int zero = 0;
short var_10 = (short)-14646;
short var_11 = (short)-30987;
unsigned short var_12 = (unsigned short)47517;
long long int var_13 = 2330213599580949480LL;
int var_14 = -597109585;
int var_15 = -1460931201;
int arr_3 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 86850748;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
