#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-37;
short var_7 = (short)-18108;
short var_8 = (short)-14564;
unsigned long long int var_9 = 4480824898246646022ULL;
int var_10 = 106171314;
long long int var_11 = 1665696322728045211LL;
signed char var_12 = (signed char)113;
_Bool var_13 = (_Bool)0;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)60555;
signed char var_20 = (signed char)116;
unsigned char var_21 = (unsigned char)130;
unsigned char var_22 = (unsigned char)55;
unsigned short var_23 = (unsigned short)28771;
unsigned char var_24 = (unsigned char)125;
unsigned long long int arr_0 [15] [15] ;
short arr_1 [15] ;
unsigned long long int arr_5 [19] ;
int arr_6 [19] ;
unsigned short arr_7 [19] ;
signed char arr_2 [15] ;
unsigned long long int arr_3 [15] ;
signed char arr_4 [15] ;
int arr_8 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 6761140695974273900ULL : 4790029034070291983ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)-4342 : (short)-13406;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 1022969335626915884ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = -61542760;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned short)48428;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)115 : (signed char)2;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 816980299982917978ULL : 6535359216243081303ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-120 : (signed char)-117;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = -1996049037;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
