#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4216822920U;
unsigned long long int var_1 = 12976964649408910291ULL;
unsigned short var_6 = (unsigned short)33399;
unsigned short var_9 = (unsigned short)32966;
short var_10 = (short)-2708;
_Bool var_11 = (_Bool)0;
int var_13 = -1526275229;
long long int var_15 = -9022697213026797901LL;
int zero = 0;
unsigned short var_16 = (unsigned short)44834;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3061270226U;
unsigned short var_19 = (unsigned short)11224;
long long int var_20 = 3234590868204837545LL;
short var_21 = (short)-27460;
unsigned short var_22 = (unsigned short)34622;
signed char var_23 = (signed char)84;
int var_24 = -611996271;
unsigned short var_25 = (unsigned short)28924;
unsigned long long int arr_0 [18] [18] ;
int arr_1 [18] ;
_Bool arr_2 [18] [18] ;
long long int arr_3 [18] [18] ;
long long int arr_5 [12] ;
short arr_6 [12] ;
unsigned int arr_7 [12] ;
int arr_4 [18] ;
unsigned char arr_11 [12] [12] ;
signed char arr_12 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 17696663372562176239ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 1826159997;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 6852024433571535229LL : -2237198741948573551LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = -7681461846437231854LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)13589 : (short)9460;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 2851778846U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 122346359 : -156674320;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)137 : (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (signed char)-30 : (signed char)-60;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
