#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-18;
long long int var_1 = 6395252132494853154LL;
short var_2 = (short)-698;
signed char var_3 = (signed char)123;
unsigned char var_4 = (unsigned char)243;
unsigned short var_5 = (unsigned short)7537;
short var_6 = (short)30499;
long long int var_7 = -2172588897039584317LL;
int var_8 = -204952522;
_Bool var_9 = (_Bool)0;
long long int var_10 = -5301336561967993526LL;
int zero = 0;
signed char var_11 = (signed char)-68;
unsigned char var_12 = (unsigned char)60;
long long int var_13 = -347577432048409940LL;
int var_14 = 725420827;
unsigned char arr_6 [20] ;
unsigned int arr_7 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)213 : (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3679828442U : 825252476U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
