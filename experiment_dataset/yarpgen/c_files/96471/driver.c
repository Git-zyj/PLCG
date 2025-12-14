#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 4080253964U;
unsigned long long int var_5 = 4637533953585254054ULL;
unsigned char var_7 = (unsigned char)215;
unsigned long long int var_9 = 14923507405742274714ULL;
int var_10 = 953555256;
unsigned long long int var_11 = 3912068562467003003ULL;
unsigned long long int var_13 = 4377448222466679571ULL;
int zero = 0;
long long int var_19 = -4715859596076294061LL;
int var_20 = 504659370;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 10225033176838569407ULL;
_Bool var_23 = (_Bool)1;
int var_24 = -1442147436;
signed char var_25 = (signed char)-109;
_Bool var_26 = (_Bool)1;
unsigned long long int arr_0 [12] ;
long long int arr_1 [12] [12] ;
_Bool arr_2 [12] ;
_Bool arr_3 [12] ;
_Bool arr_4 [16] [16] ;
unsigned char arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 7294208575245629359ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 7557851469881180254LL : 5759827689080312209LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned char)56;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
