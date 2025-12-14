#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1088048223;
_Bool var_2 = (_Bool)1;
short var_3 = (short)24459;
long long int var_5 = 4245288705322535951LL;
unsigned int var_6 = 2298103711U;
unsigned int var_7 = 2261741082U;
signed char var_8 = (signed char)86;
unsigned long long int var_11 = 15893685455207649097ULL;
unsigned long long int var_12 = 11113549293935644892ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)165;
long long int var_14 = -5282413247234339191LL;
unsigned int var_15 = 82247860U;
unsigned char var_16 = (unsigned char)144;
unsigned int var_17 = 2693410318U;
short var_18 = (short)7774;
unsigned long long int var_19 = 11711692169658871123ULL;
short var_20 = (short)-10556;
unsigned int arr_2 [18] ;
unsigned short arr_8 [18] [18] [18] [18] ;
unsigned long long int arr_11 [18] [18] [18] [18] [18] ;
unsigned long long int arr_14 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 1984581975U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned short)47747;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = 11963882729326719076ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 15171127902696339255ULL : 2089576332944892871ULL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
