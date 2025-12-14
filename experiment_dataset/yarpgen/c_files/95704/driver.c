#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)31159;
_Bool var_3 = (_Bool)1;
long long int var_4 = 5769141169525066918LL;
unsigned long long int var_5 = 5013534571485777533ULL;
int var_6 = -787249898;
long long int var_7 = 5203076599681929842LL;
unsigned short var_8 = (unsigned short)39452;
short var_9 = (short)1930;
unsigned long long int var_11 = 5123257994754460109ULL;
unsigned char var_12 = (unsigned char)61;
int var_13 = -10175675;
int zero = 0;
unsigned short var_15 = (unsigned short)25096;
long long int var_16 = 5106515552449719776LL;
unsigned long long int var_17 = 3512356089319473840ULL;
unsigned short var_18 = (unsigned short)1950;
int var_19 = -1373093618;
unsigned long long int var_20 = 7168915199721051668ULL;
long long int var_21 = 2216157392936491059LL;
short var_22 = (short)8664;
unsigned short var_23 = (unsigned short)19043;
short var_24 = (short)12261;
long long int arr_0 [13] ;
short arr_2 [13] [13] ;
_Bool arr_3 [13] ;
int arr_4 [17] [17] ;
unsigned short arr_7 [17] [17] ;
short arr_9 [17] [17] [17] [17] ;
unsigned long long int arr_15 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -4615760068532639466LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-32462;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 1605357414;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)39788;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)13614;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 3414511968897913344ULL : 9764858838525652878ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
