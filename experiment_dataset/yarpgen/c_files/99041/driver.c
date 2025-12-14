#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1538189031;
unsigned long long int var_5 = 826975505690042376ULL;
unsigned int var_8 = 3645932779U;
unsigned long long int var_9 = 15828551917337005845ULL;
_Bool var_10 = (_Bool)1;
signed char var_13 = (signed char)-76;
int zero = 0;
unsigned short var_15 = (unsigned short)36585;
long long int var_16 = -344277430600715441LL;
int var_17 = -2079320375;
unsigned char var_18 = (unsigned char)75;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)153;
short arr_2 [24] ;
long long int arr_15 [16] ;
long long int arr_7 [24] [24] [24] ;
unsigned int arr_13 [23] ;
unsigned long long int arr_16 [16] ;
long long int arr_17 [16] ;
int arr_18 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)-11814;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = 5794777746367388193LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 4099549555328285451LL : -7140613642569874183LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = 2210169034U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = 4501732888221010805ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = 5452474501243566803LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_18 [i_0] [i_1] = -1567226579;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
