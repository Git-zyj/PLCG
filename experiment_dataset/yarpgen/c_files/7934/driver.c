#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8329413666578781737LL;
long long int var_2 = 4761996472887876116LL;
unsigned short var_5 = (unsigned short)26717;
long long int var_7 = -562743437626921055LL;
unsigned short var_11 = (unsigned short)53233;
int var_13 = -1147745949;
int zero = 0;
unsigned char var_14 = (unsigned char)164;
unsigned short var_15 = (unsigned short)34880;
unsigned short var_16 = (unsigned short)47850;
signed char var_17 = (signed char)73;
signed char var_18 = (signed char)18;
long long int var_19 = 4052956255215191021LL;
unsigned long long int var_20 = 2290907900012752371ULL;
unsigned short var_21 = (unsigned short)55398;
unsigned short var_22 = (unsigned short)55840;
unsigned long long int arr_0 [11] [11] ;
unsigned short arr_1 [11] [11] ;
unsigned short arr_2 [11] ;
unsigned long long int arr_4 [11] [11] [11] [11] ;
unsigned short arr_8 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 10628910044618085892ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)55406;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)61445;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 13078394570753255610ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned short)61997;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
