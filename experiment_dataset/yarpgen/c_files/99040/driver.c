#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_3 = -6103326914751888724LL;
short var_4 = (short)-25463;
int var_5 = -1315487683;
long long int var_7 = 3637768083684227898LL;
short var_9 = (short)-17967;
short var_10 = (short)-18912;
unsigned short var_12 = (unsigned short)65080;
int zero = 0;
unsigned char var_14 = (unsigned char)35;
unsigned char var_15 = (unsigned char)240;
short var_16 = (short)20168;
unsigned long long int var_17 = 16191302841178569944ULL;
_Bool var_18 = (_Bool)0;
int var_19 = 102642294;
unsigned short var_20 = (unsigned short)1062;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)97;
unsigned long long int var_23 = 17171105031664560220ULL;
short var_24 = (short)17298;
unsigned char arr_2 [12] ;
short arr_5 [12] [12] [12] ;
unsigned long long int arr_7 [12] [12] [12] [12] [12] ;
unsigned short arr_12 [13] ;
long long int arr_13 [13] [13] ;
unsigned long long int arr_14 [13] [13] ;
unsigned short arr_15 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-15457 : (short)-4997;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = 5432926574800371771ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (unsigned short)49609;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = 8204714973152003918LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = 17176795057176586921ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)32433;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
