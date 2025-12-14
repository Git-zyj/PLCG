#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)146;
short var_2 = (short)26713;
int var_3 = -1761711484;
unsigned long long int var_5 = 16757153896961191514ULL;
long long int var_6 = 1574553400086548344LL;
unsigned char var_7 = (unsigned char)216;
long long int var_9 = -5511517610337878547LL;
long long int var_10 = 9032738744274804197LL;
signed char var_12 = (signed char)-10;
short var_13 = (short)-11188;
int var_15 = -83296395;
unsigned char var_16 = (unsigned char)148;
int zero = 0;
short var_19 = (short)29002;
unsigned int var_20 = 3926693717U;
signed char var_21 = (signed char)110;
_Bool var_22 = (_Bool)0;
int var_23 = 1633728043;
_Bool var_24 = (_Bool)0;
int var_25 = -1262926291;
unsigned int var_26 = 3046198951U;
signed char var_27 = (signed char)-57;
unsigned short arr_0 [20] ;
unsigned int arr_1 [20] ;
unsigned int arr_2 [20] [20] [20] ;
unsigned short arr_3 [20] ;
_Bool arr_4 [20] [20] [20] ;
_Bool arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)39695;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 1931829769U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1846359278U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)3058;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
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
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
