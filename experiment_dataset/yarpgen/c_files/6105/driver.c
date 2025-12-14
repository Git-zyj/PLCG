#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-126;
unsigned short var_2 = (unsigned short)64354;
unsigned int var_3 = 1925202327U;
unsigned short var_6 = (unsigned short)14732;
unsigned long long int var_8 = 11660770663086819075ULL;
unsigned short var_15 = (unsigned short)25288;
int zero = 0;
signed char var_16 = (signed char)-48;
unsigned long long int var_17 = 10376589097353062158ULL;
long long int var_18 = -4305570630744434783LL;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 11383523544834517518ULL;
long long int var_21 = -7680156774270124048LL;
short var_22 = (short)-30617;
unsigned short var_23 = (unsigned short)37484;
unsigned short var_24 = (unsigned short)36699;
signed char arr_0 [19] ;
signed char arr_2 [19] [19] ;
unsigned short arr_3 [19] ;
unsigned short arr_4 [19] ;
long long int arr_5 [19] [19] ;
unsigned long long int arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)57190;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned short)26540;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 1728746465103310460LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 9096676933160695234ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
