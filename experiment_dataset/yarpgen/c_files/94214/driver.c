#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1505653318;
_Bool var_4 = (_Bool)0;
int var_5 = 910764405;
int var_8 = -1254587118;
int var_10 = 185690511;
unsigned short var_11 = (unsigned short)59613;
_Bool var_12 = (_Bool)1;
int var_14 = -770785991;
int zero = 0;
int var_15 = -2037995344;
unsigned long long int var_16 = 5395629034819356089ULL;
_Bool var_17 = (_Bool)0;
long long int var_18 = -6826315478030591176LL;
unsigned char var_19 = (unsigned char)228;
unsigned char var_20 = (unsigned char)141;
int arr_1 [16] ;
int arr_2 [16] [16] ;
int arr_3 [16] [16] ;
int arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 67368052;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 1364831918;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? -1879403573 : -1178280025;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -1775138411 : 1973935958;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
