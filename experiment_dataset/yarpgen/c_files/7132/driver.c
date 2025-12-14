#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13255;
int var_3 = -1689858536;
unsigned long long int var_4 = 14292802756563108928ULL;
long long int var_5 = 1210618029914415721LL;
unsigned char var_6 = (unsigned char)135;
signed char var_7 = (signed char)-84;
signed char var_8 = (signed char)-126;
unsigned char var_9 = (unsigned char)234;
unsigned short var_11 = (unsigned short)55797;
unsigned long long int var_12 = 1150101264020228680ULL;
unsigned long long int var_14 = 16956953975625007570ULL;
int zero = 0;
long long int var_16 = 7532970096839734239LL;
unsigned long long int var_17 = 16828087297132695788ULL;
unsigned short var_18 = (unsigned short)60078;
unsigned long long int var_19 = 10571076142966408290ULL;
unsigned short var_20 = (unsigned short)51410;
long long int var_21 = 4862169163935002287LL;
unsigned long long int var_22 = 6867416206964214249ULL;
unsigned char var_23 = (unsigned char)110;
unsigned int arr_4 [12] [12] ;
signed char arr_5 [12] ;
unsigned short arr_7 [12] [12] [12] ;
signed char arr_8 [12] [12] [12] ;
_Bool arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 1937294021U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)2946;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-67 : (signed char)114;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
