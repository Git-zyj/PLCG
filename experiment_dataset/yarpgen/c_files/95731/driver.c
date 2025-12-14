#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16794;
unsigned long long int var_1 = 6387144658586441953ULL;
unsigned short var_2 = (unsigned short)46893;
short var_5 = (short)-18530;
unsigned short var_6 = (unsigned short)7654;
unsigned long long int var_8 = 7714685314143074512ULL;
unsigned short var_9 = (unsigned short)38525;
short var_10 = (short)-13366;
unsigned long long int var_11 = 6896229489831506973ULL;
int zero = 0;
unsigned int var_19 = 1481616499U;
int var_20 = 1139120185;
_Bool var_21 = (_Bool)0;
long long int var_22 = -5465931899425342703LL;
signed char var_23 = (signed char)126;
unsigned long long int var_24 = 2389317760842686148ULL;
signed char var_25 = (signed char)110;
unsigned short var_26 = (unsigned short)60127;
short var_27 = (short)13180;
unsigned short var_28 = (unsigned short)6680;
unsigned short var_29 = (unsigned short)14949;
unsigned int var_30 = 3273295506U;
short var_31 = (short)17448;
unsigned short var_32 = (unsigned short)52714;
long long int var_33 = -7638590132450703888LL;
signed char arr_0 [12] ;
unsigned short arr_1 [12] ;
unsigned short arr_3 [16] [16] ;
unsigned long long int arr_7 [16] [16] [16] ;
short arr_8 [16] ;
unsigned short arr_14 [16] [16] ;
unsigned int arr_18 [16] [16] [16] ;
_Bool arr_5 [16] [16] ;
unsigned int arr_10 [16] [16] [16] ;
int arr_15 [16] [16] ;
unsigned int arr_16 [16] ;
signed char arr_19 [16] [16] [16] ;
short arr_20 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)3745;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)55000;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 2255464774546304747ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (short)16274;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)55813;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 1080585469U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 567359312U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = -838667889;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = 797211193U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (signed char)59;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = (short)20760;
}

void checksum() {
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
