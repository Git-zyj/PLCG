#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8438642966329745185ULL;
int var_2 = 1824794567;
unsigned char var_4 = (unsigned char)181;
long long int var_5 = -803774393846449899LL;
unsigned short var_6 = (unsigned short)59481;
long long int var_7 = 5292423120490972372LL;
int var_8 = -1387625263;
int var_12 = 1501724909;
short var_18 = (short)-23686;
int zero = 0;
unsigned int var_19 = 4271296760U;
unsigned int var_20 = 1715460268U;
long long int var_21 = -8397319254560892340LL;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)48406;
unsigned char var_24 = (unsigned char)219;
int arr_0 [24] ;
unsigned long long int arr_1 [24] ;
unsigned long long int arr_2 [24] ;
unsigned long long int arr_3 [24] [24] [24] ;
unsigned char arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -2083114225;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 11605764459182909823ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 14582373180963829431ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 17988734403588058759ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)168;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
