#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)122;
signed char var_3 = (signed char)103;
unsigned long long int var_4 = 3785501975607282082ULL;
short var_5 = (short)-25949;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned char var_11 = (unsigned char)26;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_13 = (short)-5267;
unsigned char var_14 = (unsigned char)240;
int var_15 = 1453082475;
int var_16 = 251318048;
unsigned int var_17 = 3759209812U;
short var_18 = (short)-3855;
signed char var_19 = (signed char)-7;
short var_20 = (short)27784;
long long int var_21 = -6096645156442536152LL;
short var_22 = (short)9766;
unsigned short var_23 = (unsigned short)42369;
long long int var_24 = 9108985327207350255LL;
signed char var_25 = (signed char)42;
long long int var_26 = 1509135609489316710LL;
long long int var_27 = 7428780039127939581LL;
unsigned char var_28 = (unsigned char)99;
unsigned short var_29 = (unsigned short)2463;
_Bool arr_0 [12] ;
_Bool arr_1 [12] ;
unsigned long long int arr_3 [12] ;
unsigned int arr_4 [12] ;
int arr_7 [12] [12] ;
unsigned int arr_13 [12] ;
long long int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 14182244841858434634ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 1263077161U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = -1655087853;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = 3572408185U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 4851451768302134022LL : 595049632538162052LL;
}

void checksum() {
    hash(&seed, var_13);
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
