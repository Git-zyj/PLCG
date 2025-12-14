#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)77;
unsigned short var_2 = (unsigned short)15791;
long long int var_3 = -4658062625007783130LL;
_Bool var_4 = (_Bool)0;
int var_5 = 439157655;
long long int var_7 = 6862142756134919666LL;
short var_10 = (short)414;
unsigned long long int var_12 = 11466179175370752685ULL;
unsigned int var_14 = 1385918560U;
unsigned int var_15 = 983994411U;
int zero = 0;
unsigned short var_17 = (unsigned short)52002;
unsigned short var_18 = (unsigned short)16725;
unsigned int var_19 = 2213571840U;
unsigned short var_20 = (unsigned short)17045;
unsigned long long int var_21 = 1302144725272296684ULL;
unsigned char var_22 = (unsigned char)225;
unsigned long long int var_23 = 2350091789157499395ULL;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 5545906852749098348ULL;
long long int var_26 = 5690531217993177067LL;
unsigned short var_27 = (unsigned short)12722;
long long int var_28 = -1102669537379584028LL;
unsigned char arr_1 [25] ;
unsigned int arr_2 [25] [25] ;
unsigned int arr_6 [25] [25] ;
long long int arr_7 [25] [25] [25] ;
signed char arr_8 [25] [25] [25] [25] [25] ;
unsigned int arr_9 [25] [25] [25] [25] ;
_Bool arr_14 [23] ;
_Bool arr_15 [23] ;
signed char arr_12 [25] ;
unsigned short arr_19 [11] ;
unsigned short arr_20 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 177751987U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = 2143475005U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 3299370903028602580LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 3306039057U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (unsigned short)53032 : (unsigned short)59873;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned short)39486 : (unsigned short)44739;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
