#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)62764;
signed char var_3 = (signed char)51;
unsigned long long int var_4 = 8222009750585692591ULL;
long long int var_6 = 548928227743337423LL;
long long int var_7 = -2028848638214830090LL;
long long int var_9 = 1898795404367924022LL;
unsigned short var_10 = (unsigned short)5538;
int zero = 0;
int var_11 = -158552133;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)171;
unsigned int var_14 = 1443378961U;
_Bool var_15 = (_Bool)0;
long long int arr_3 [18] ;
unsigned long long int arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 8472292705396055095LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 4733943485164092592ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
