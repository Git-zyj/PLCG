#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11324113169574025624ULL;
short var_2 = (short)-26103;
unsigned int var_3 = 567676720U;
unsigned int var_4 = 2938582410U;
short var_5 = (short)-23419;
short var_7 = (short)-30944;
unsigned long long int var_8 = 6303055317996184668ULL;
unsigned int var_10 = 1297776088U;
short var_11 = (short)-24657;
unsigned int var_12 = 3634162989U;
short var_13 = (short)10462;
unsigned int var_14 = 1015647330U;
int zero = 0;
unsigned long long int var_15 = 6514277612931155293ULL;
unsigned long long int var_16 = 10323020585135561659ULL;
unsigned int var_17 = 350860251U;
short var_18 = (short)-1352;
unsigned long long int var_19 = 497198512127283999ULL;
short var_20 = (short)-5832;
unsigned long long int var_21 = 8106223696449353328ULL;
unsigned long long int var_22 = 16324975313246916198ULL;
short var_23 = (short)-3850;
unsigned long long int var_24 = 12467408609091284730ULL;
short var_25 = (short)-12389;
short var_26 = (short)12113;
unsigned int var_27 = 3174364884U;
short var_28 = (short)-22399;
short arr_0 [13] [13] ;
short arr_3 [16] ;
short arr_4 [16] ;
short arr_7 [22] ;
short arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-21032;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)9152 : (short)11706;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)9527;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (short)16854;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)21622 : (short)-19706;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
