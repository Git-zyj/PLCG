#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1473529077475181029LL;
unsigned char var_1 = (unsigned char)255;
_Bool var_2 = (_Bool)0;
long long int var_5 = -7635692978992076075LL;
int zero = 0;
int var_14 = 1756223496;
_Bool var_15 = (_Bool)1;
int var_16 = -2011375851;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)44779;
long long int var_19 = 9005541674241903061LL;
int arr_1 [11] ;
unsigned int arr_2 [11] [11] ;
unsigned long long int arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -1452075099;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 649128575U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 14890281502062613360ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
