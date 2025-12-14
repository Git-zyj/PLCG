#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49313;
int var_3 = -1536765308;
signed char var_5 = (signed char)-26;
short var_6 = (short)-15107;
int var_8 = 532460368;
signed char var_9 = (signed char)72;
int var_12 = -243723381;
unsigned short var_13 = (unsigned short)10246;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1205111473U;
int var_16 = -1252481217;
long long int var_17 = 6787116570517066460LL;
unsigned long long int var_18 = 6442940214517613728ULL;
unsigned long long int arr_0 [24] ;
signed char arr_1 [24] ;
unsigned long long int arr_2 [24] ;
unsigned char arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 12307098828369749318ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)-102;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 16974957286207454148ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (unsigned char)206;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
