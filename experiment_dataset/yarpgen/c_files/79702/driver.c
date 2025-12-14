#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27688;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)90;
signed char var_3 = (signed char)76;
long long int var_6 = 8743424681037846613LL;
unsigned char var_8 = (unsigned char)66;
signed char var_11 = (signed char)-79;
int zero = 0;
signed char var_15 = (signed char)-124;
short var_16 = (short)-18500;
unsigned int var_17 = 3470473336U;
unsigned long long int var_18 = 7743019311203446061ULL;
short var_19 = (short)-17426;
signed char var_20 = (signed char)26;
short arr_0 [24] ;
signed char arr_1 [24] [24] ;
unsigned char arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)26527;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)192 : (unsigned char)205;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
