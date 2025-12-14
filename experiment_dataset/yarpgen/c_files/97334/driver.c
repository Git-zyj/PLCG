#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -830602545;
unsigned int var_3 = 478001182U;
unsigned char var_4 = (unsigned char)186;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)34;
int var_8 = 377238585;
unsigned short var_9 = (unsigned short)34617;
unsigned long long int var_11 = 4771147752114473840ULL;
unsigned long long int var_12 = 17513327157739870312ULL;
short var_13 = (short)16671;
int var_14 = 865473022;
int zero = 0;
unsigned short var_15 = (unsigned short)37877;
int var_16 = -143696122;
unsigned long long int var_17 = 15783131910452484177ULL;
int var_18 = 120463698;
unsigned int var_19 = 677429462U;
int var_20 = 491903387;
long long int var_21 = -4702948102630044382LL;
signed char var_22 = (signed char)80;
_Bool arr_3 [22] ;
unsigned long long int arr_2 [12] ;
unsigned short arr_12 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 12319314216644211807ULL : 9628780469984798812ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)12358 : (unsigned short)18756;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
