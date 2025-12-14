#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11028005360886126385ULL;
unsigned long long int var_5 = 7465614398591959093ULL;
signed char var_8 = (signed char)63;
short var_12 = (short)-10471;
_Bool var_14 = (_Bool)0;
unsigned char var_16 = (unsigned char)14;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)41;
unsigned long long int var_19 = 6286980061034725162ULL;
unsigned long long int var_20 = 7430968811400816197ULL;
unsigned char var_21 = (unsigned char)255;
signed char var_22 = (signed char)-23;
signed char var_23 = (signed char)-33;
unsigned short var_24 = (unsigned short)41978;
short var_25 = (short)1729;
int var_26 = -1502541738;
short var_27 = (short)-8860;
unsigned short arr_2 [17] ;
unsigned short arr_6 [17] [17] [17] [17] ;
_Bool arr_7 [24] ;
unsigned long long int arr_9 [24] ;
_Bool arr_10 [24] ;
unsigned short arr_15 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned short)36916;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)60720 : (unsigned short)60462;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = 17104181603220579719ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned short)10371;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
