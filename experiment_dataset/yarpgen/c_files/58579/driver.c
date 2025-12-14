#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10731;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)49554;
unsigned long long int var_3 = 2625186408227678295ULL;
signed char var_4 = (signed char)-123;
signed char var_6 = (signed char)-34;
int var_7 = -1108824933;
signed char var_10 = (signed char)-38;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)1;
int zero = 0;
unsigned long long int var_13 = 6648418644917190076ULL;
short var_14 = (short)-5774;
unsigned char var_15 = (unsigned char)168;
int var_16 = 79661444;
unsigned char var_17 = (unsigned char)81;
int var_18 = -558251585;
long long int var_19 = -5858997135737265685LL;
signed char var_20 = (signed char)3;
int var_21 = -1718690239;
unsigned long long int arr_0 [23] [23] ;
long long int arr_1 [23] ;
unsigned long long int arr_2 [23] ;
int arr_3 [23] ;
short arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 10934236798474031510ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -1159144536500379170LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 7622351809214123328ULL : 5267957717185485537ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = -1716036643;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)9715 : (short)-5406;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
