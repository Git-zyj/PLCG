#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)21062;
unsigned long long int var_8 = 17645767352157239904ULL;
unsigned long long int var_11 = 14445665793995078107ULL;
int zero = 0;
unsigned long long int var_12 = 16263023910829060363ULL;
long long int var_13 = 1629394782463635322LL;
unsigned char var_14 = (unsigned char)106;
unsigned short var_15 = (unsigned short)18651;
unsigned char var_16 = (unsigned char)34;
_Bool var_17 = (_Bool)0;
long long int var_18 = 1917870101907321476LL;
unsigned short arr_1 [21] ;
unsigned short arr_5 [22] ;
unsigned short arr_3 [21] ;
signed char arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)48482;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned short)58322;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned short)58012;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (signed char)35;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
