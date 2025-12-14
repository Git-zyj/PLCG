#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16485;
signed char var_1 = (signed char)71;
int var_2 = -59091290;
signed char var_3 = (signed char)51;
unsigned int var_4 = 3977477127U;
signed char var_5 = (signed char)-46;
short var_7 = (short)-1800;
_Bool var_8 = (_Bool)0;
long long int var_10 = -6401508133844583144LL;
int var_11 = -2100020836;
signed char var_12 = (signed char)-1;
signed char var_13 = (signed char)13;
unsigned char var_14 = (unsigned char)100;
signed char var_15 = (signed char)103;
unsigned long long int var_16 = 6742334042300087261ULL;
int zero = 0;
short var_17 = (short)3868;
unsigned long long int var_18 = 12222188409703281194ULL;
short var_19 = (short)-24190;
unsigned int var_20 = 3328534941U;
short var_21 = (short)30678;
unsigned short arr_3 [11] [11] [11] ;
unsigned short arr_14 [11] ;
long long int arr_15 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)55077;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned short)9381 : (unsigned short)20785;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 7899995889437955562LL : -3275309019001024763LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
