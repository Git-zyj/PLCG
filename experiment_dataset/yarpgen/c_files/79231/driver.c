#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)23;
unsigned short var_3 = (unsigned short)11904;
_Bool var_4 = (_Bool)0;
short var_5 = (short)6061;
long long int var_6 = -1471753139387288270LL;
signed char var_9 = (signed char)37;
int var_14 = -1581281580;
int zero = 0;
long long int var_15 = -4141239261816408453LL;
long long int var_16 = -7573076871758367202LL;
short var_17 = (short)-30339;
unsigned long long int var_18 = 625187690084463706ULL;
_Bool var_19 = (_Bool)1;
int arr_1 [22] ;
int arr_2 [22] ;
unsigned short arr_5 [16] ;
long long int arr_3 [22] ;
signed char arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -229523468;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -99051056;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned short)31293;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -5619141785732801438LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (signed char)-110;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
