#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2991087740U;
unsigned char var_1 = (unsigned char)182;
unsigned long long int var_2 = 11996662654384157202ULL;
unsigned short var_3 = (unsigned short)10898;
unsigned long long int var_4 = 13131936115057774878ULL;
unsigned long long int var_5 = 17287934410207493085ULL;
int var_6 = -1693454940;
unsigned char var_7 = (unsigned char)253;
unsigned char var_9 = (unsigned char)24;
int var_11 = 1415075456;
unsigned long long int var_12 = 13629078496987264024ULL;
unsigned char var_13 = (unsigned char)186;
long long int var_14 = -7502330497177885463LL;
unsigned long long int var_15 = 8925806443998190419ULL;
unsigned char var_16 = (unsigned char)170;
int var_17 = -772882655;
int zero = 0;
unsigned long long int var_18 = 4081187374473275685ULL;
short var_19 = (short)-4698;
unsigned char var_20 = (unsigned char)178;
short var_21 = (short)5941;
unsigned short var_22 = (unsigned short)55072;
unsigned long long int var_23 = 9391981610689601196ULL;
unsigned long long int var_24 = 3826605279313861976ULL;
unsigned short var_25 = (unsigned short)49871;
unsigned short var_26 = (unsigned short)30877;
short var_27 = (short)-10481;
unsigned long long int var_28 = 14038868980202665292ULL;
long long int var_29 = -3556960970416639529LL;
unsigned char var_30 = (unsigned char)10;
short var_31 = (short)5690;
unsigned long long int arr_9 [13] [13] [13] [13] ;
long long int arr_12 [13] [13] [13] ;
unsigned long long int arr_13 [13] [13] [13] ;
unsigned char arr_10 [13] ;
unsigned long long int arr_16 [13] [13] ;
long long int arr_22 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 3665380861385730038ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -6932837006677067583LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 3212305493416025230ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? 17317481603004359572ULL : 989317035593407454ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? -368814878794991042LL : -2135970820210222085LL;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
