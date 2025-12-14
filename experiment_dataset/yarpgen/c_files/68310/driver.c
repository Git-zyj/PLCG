#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11436;
unsigned char var_1 = (unsigned char)31;
unsigned long long int var_2 = 14666202082341093208ULL;
long long int var_3 = 710312124507285859LL;
unsigned char var_4 = (unsigned char)205;
long long int var_5 = -2216289192420827669LL;
signed char var_7 = (signed char)99;
int var_8 = -938872748;
unsigned long long int var_9 = 7626815418803890523ULL;
_Bool var_10 = (_Bool)0;
int var_11 = 1483849335;
int zero = 0;
unsigned short var_12 = (unsigned short)59243;
unsigned short var_13 = (unsigned short)48220;
signed char var_14 = (signed char)44;
int var_15 = -673386930;
unsigned char var_16 = (unsigned char)130;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-27632;
long long int var_19 = -4513830234703271049LL;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-64;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 2123488067U;
long long int var_24 = 3188769476147233253LL;
signed char arr_12 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (signed char)3;
}

void checksum() {
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
