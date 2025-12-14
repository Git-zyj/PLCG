#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1778600741;
unsigned short var_1 = (unsigned short)27044;
unsigned long long int var_3 = 6138565200871031772ULL;
int var_4 = 2057284099;
unsigned long long int var_5 = 18118111504338758610ULL;
_Bool var_6 = (_Bool)0;
long long int var_7 = 7039682156077877257LL;
int var_8 = -1831168941;
int var_12 = -2118418021;
unsigned char var_13 = (unsigned char)170;
_Bool var_14 = (_Bool)0;
unsigned long long int var_16 = 3753017844724583850ULL;
int zero = 0;
unsigned long long int var_17 = 14000719998447117359ULL;
unsigned char var_18 = (unsigned char)127;
unsigned char var_19 = (unsigned char)139;
unsigned char var_20 = (unsigned char)119;
unsigned char var_21 = (unsigned char)143;
unsigned long long int var_22 = 16462842848627782620ULL;
int arr_1 [13] ;
int arr_2 [13] ;
unsigned short arr_3 [13] ;
unsigned char arr_4 [13] [13] ;
unsigned char arr_5 [13] [13] ;
short arr_7 [13] [13] [13] ;
unsigned long long int arr_8 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -867073307;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -585161496;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)1552;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-8659 : (short)20459;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 16003013804087459127ULL : 2817137944002362779ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
