#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2511702248U;
signed char var_9 = (signed char)-21;
unsigned long long int var_11 = 6710520597140374515ULL;
long long int var_15 = 7433943441425680189LL;
unsigned long long int var_17 = 17029780950213811163ULL;
short var_18 = (short)-25308;
int zero = 0;
unsigned int var_20 = 4288119589U;
unsigned int var_21 = 763455954U;
unsigned int var_22 = 3668289091U;
unsigned long long int var_23 = 8571154376975945397ULL;
unsigned long long int var_24 = 570399166342169906ULL;
long long int var_25 = -5526778280602722419LL;
long long int var_26 = -5458310844975364000LL;
short arr_0 [22] ;
unsigned int arr_1 [22] [22] ;
short arr_4 [24] ;
signed char arr_5 [24] ;
_Bool arr_11 [25] ;
short arr_14 [25] [25] ;
unsigned int arr_3 [22] [22] ;
unsigned int arr_7 [24] ;
unsigned long long int arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-13501 : (short)26027;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 3048065713U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)-19393;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)87 : (signed char)-29;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = (short)8575;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 995164607U : 2020318349U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1131757975U : 341322419U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 9363218172000708378ULL : 5373579525017151070ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
