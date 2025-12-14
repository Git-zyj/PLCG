#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 1393352921U;
unsigned short var_2 = (unsigned short)46877;
long long int var_4 = -3919564149917397121LL;
unsigned char var_5 = (unsigned char)130;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 17339661102245186179ULL;
int var_8 = -1632659522;
short var_10 = (short)7862;
long long int var_11 = -3938503259747332621LL;
unsigned char var_12 = (unsigned char)17;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 1119635831891664043LL;
unsigned int var_16 = 1935170999U;
unsigned long long int var_17 = 15894922581193970767ULL;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)179;
unsigned long long int var_20 = 11339524885065393290ULL;
unsigned short var_21 = (unsigned short)360;
long long int var_22 = 8986691780305064246LL;
int var_23 = 97345508;
unsigned short var_24 = (unsigned short)61130;
short var_25 = (short)-10715;
unsigned char var_26 = (unsigned char)244;
unsigned char var_27 = (unsigned char)239;
int var_28 = -519608995;
unsigned long long int var_29 = 1651342437654517048ULL;
unsigned short arr_0 [17] ;
unsigned long long int arr_1 [17] ;
short arr_2 [17] ;
int arr_3 [17] ;
unsigned int arr_4 [17] [17] ;
int arr_5 [17] [17] [17] ;
unsigned long long int arr_6 [16] ;
unsigned long long int arr_7 [16] ;
long long int arr_10 [16] ;
signed char arr_11 [16] ;
_Bool arr_12 [16] ;
int arr_19 [16] ;
signed char arr_20 [16] ;
int arr_9 [16] ;
_Bool arr_14 [16] [16] ;
short arr_18 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)42089;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3361354263501208452ULL : 17490768167506688511ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)30478 : (short)-7483;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -1978110302;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 3502942093U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -1499133992;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 142364743968342604ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 3753016942404025842ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = -2681640823025765801LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)-59 : (signed char)25;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? -552569465 : -1736275261;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (signed char)89 : (signed char)35;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = 2132587044;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (short)-23754;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
