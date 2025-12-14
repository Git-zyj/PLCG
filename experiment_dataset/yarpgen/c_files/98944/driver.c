#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2485506058569877460ULL;
signed char var_1 = (signed char)-95;
long long int var_3 = -806914427800619084LL;
unsigned char var_4 = (unsigned char)58;
unsigned int var_5 = 949041857U;
long long int var_8 = 7342528339874185153LL;
unsigned long long int var_9 = 2380595804262808899ULL;
unsigned long long int var_10 = 17343954080885015997ULL;
signed char var_11 = (signed char)7;
long long int var_12 = -1936668487253654997LL;
unsigned long long int var_13 = 16707558719099601490ULL;
unsigned char var_14 = (unsigned char)111;
unsigned short var_17 = (unsigned short)17795;
unsigned int var_18 = 649207464U;
int zero = 0;
short var_19 = (short)4829;
unsigned int var_20 = 104887100U;
long long int var_21 = -2195994596687254373LL;
signed char var_22 = (signed char)-88;
signed char var_23 = (signed char)28;
int arr_6 [12] [12] [12] ;
short arr_7 [12] ;
unsigned short arr_8 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 213605709;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (short)-20101;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)40291;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
