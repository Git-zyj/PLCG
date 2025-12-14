#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -55727767010873151LL;
unsigned int var_4 = 1782006790U;
signed char var_6 = (signed char)-123;
signed char var_7 = (signed char)-89;
unsigned int var_8 = 1993045826U;
long long int var_10 = 3094588402492823598LL;
_Bool var_11 = (_Bool)0;
int var_12 = 31264887;
unsigned int var_13 = 361579978U;
signed char var_14 = (signed char)-97;
long long int var_18 = -4404065397927014784LL;
int zero = 0;
unsigned int var_19 = 4253401481U;
int var_20 = 112229927;
long long int var_21 = 5926943303963922654LL;
_Bool var_22 = (_Bool)1;
long long int var_23 = -1554039336576618392LL;
short var_24 = (short)-5985;
int var_25 = 1039421895;
int arr_6 [21] [21] [21] ;
signed char arr_13 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1265716227;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (signed char)-98;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
