#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1879653942761234755LL;
long long int var_1 = -1333384986930716500LL;
long long int var_2 = 4853074839737557145LL;
long long int var_3 = 7359990675568938843LL;
unsigned int var_4 = 861025595U;
short var_5 = (short)-20855;
int var_7 = -436186150;
unsigned char var_8 = (unsigned char)101;
long long int var_9 = 4853128386052595944LL;
long long int var_10 = 7062598209711574382LL;
unsigned short var_13 = (unsigned short)51902;
unsigned short var_14 = (unsigned short)44279;
unsigned char var_15 = (unsigned char)157;
short var_16 = (short)-2485;
int zero = 0;
signed char var_18 = (signed char)-86;
int var_19 = 1429586160;
signed char var_20 = (signed char)28;
signed char var_21 = (signed char)77;
long long int var_22 = 6511681097762374563LL;
long long int var_23 = 263848396420646521LL;
long long int var_24 = -901510527162483212LL;
signed char var_25 = (signed char)-46;
unsigned short var_26 = (unsigned short)29984;
_Bool var_27 = (_Bool)1;
signed char arr_0 [18] ;
long long int arr_1 [18] [18] ;
unsigned char arr_3 [18] ;
long long int arr_4 [18] ;
unsigned char arr_6 [18] ;
unsigned short arr_7 [18] ;
unsigned char arr_11 [18] ;
short arr_12 [18] [18] ;
signed char arr_18 [25] ;
int arr_19 [25] [25] ;
long long int arr_22 [25] [25] [25] ;
short arr_2 [18] ;
signed char arr_10 [18] [18] ;
signed char arr_13 [18] ;
unsigned int arr_23 [25] [25] [25] ;
short arr_24 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)-105;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 5423105981402092132LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -8693644149292390311LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (unsigned short)6376;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (short)-29496;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = (signed char)35;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_19 [i_0] [i_1] = -2062240674;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = -5495899238078554974LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)-12174;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2971424826U : 885527424U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-31259 : (short)9443;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
