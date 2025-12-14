#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5587051519360368986ULL;
int var_4 = -1531626531;
unsigned char var_5 = (unsigned char)253;
long long int var_7 = -5596459420827908667LL;
int var_8 = 418819434;
unsigned long long int var_10 = 2268265766000007193ULL;
_Bool var_11 = (_Bool)0;
long long int var_12 = -210450452243142138LL;
int var_13 = -484806624;
signed char var_14 = (signed char)-17;
_Bool var_15 = (_Bool)1;
int var_16 = -879334378;
short var_17 = (short)-22312;
short var_18 = (short)17362;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2663084263U;
long long int var_22 = -3169390758051245225LL;
int var_23 = -191063920;
unsigned long long int var_24 = 9007753996701395504ULL;
int var_25 = -984814480;
unsigned char var_26 = (unsigned char)181;
int var_27 = -1818545564;
int var_28 = -1416754522;
signed char var_29 = (signed char)70;
long long int var_30 = -9018294588067672918LL;
unsigned int var_31 = 174153977U;
_Bool arr_3 [11] ;
long long int arr_6 [20] ;
short arr_14 [20] [20] [20] [20] [20] [20] ;
long long int arr_15 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = -4226262201174580575LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (short)2016 : (short)-8681;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = -7803443130397764821LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
