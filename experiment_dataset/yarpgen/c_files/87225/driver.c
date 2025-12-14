#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1254654504938531903LL;
signed char var_3 = (signed char)-99;
unsigned short var_4 = (unsigned short)21157;
int var_5 = 254870121;
_Bool var_6 = (_Bool)0;
long long int var_7 = -6091579257334346945LL;
long long int var_9 = -2881261436797358051LL;
unsigned long long int var_10 = 9968267838911267057ULL;
short var_12 = (short)18435;
unsigned int var_13 = 2592134422U;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-11;
signed char var_18 = (signed char)-108;
long long int var_19 = -9125084960783114643LL;
_Bool var_20 = (_Bool)0;
unsigned short arr_1 [17] ;
short arr_3 [17] ;
long long int arr_5 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)5407;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-27591 : (short)-31870;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -6583966016702455306LL : -3899554624210072728LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
