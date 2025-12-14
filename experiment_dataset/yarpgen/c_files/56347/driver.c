#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -806667556;
signed char var_3 = (signed char)-22;
unsigned short var_4 = (unsigned short)27149;
unsigned int var_5 = 1624945585U;
int var_9 = -11777264;
unsigned long long int var_10 = 17760298792617996188ULL;
unsigned long long int var_12 = 15306938284964218537ULL;
unsigned short var_15 = (unsigned short)33044;
unsigned short var_17 = (unsigned short)2163;
int zero = 0;
unsigned short var_18 = (unsigned short)45001;
short var_19 = (short)-25679;
signed char var_20 = (signed char)-89;
unsigned short var_21 = (unsigned short)22570;
unsigned short var_22 = (unsigned short)64237;
signed char arr_1 [25] ;
long long int arr_2 [25] ;
unsigned long long int arr_3 [25] ;
unsigned long long int arr_4 [25] [25] [25] ;
unsigned long long int arr_6 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -1163695012278112706LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 4446235039882509268ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 10006488837297639864ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = 5930010398485625044ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
