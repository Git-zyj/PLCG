#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1040749387339759543LL;
unsigned char var_1 = (unsigned char)212;
unsigned long long int var_6 = 9238934118416705857ULL;
unsigned char var_10 = (unsigned char)100;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)74;
unsigned char var_13 = (unsigned char)216;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)62907;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_18 = 7797416055938670078LL;
unsigned int var_19 = 1651325869U;
unsigned int var_20 = 2365449571U;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 2035255991U;
signed char var_24 = (signed char)-110;
unsigned char var_25 = (unsigned char)46;
unsigned int var_26 = 2299135031U;
signed char var_27 = (signed char)-84;
unsigned short arr_0 [21] ;
signed char arr_1 [21] ;
int arr_2 [21] ;
long long int arr_3 [21] [21] [21] ;
unsigned char arr_4 [21] ;
unsigned int arr_6 [21] [21] ;
short arr_16 [24] ;
unsigned int arr_18 [24] [24] ;
unsigned long long int arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)33509;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-63 : (signed char)45;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -1770296794;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 5499816476507696101LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)180 : (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 3142742722U : 859311733U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = (short)24253;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_18 [i_0] [i_1] = 630036310U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 5272811036616291865ULL : 8326860811905655370ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
