#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)9;
short var_1 = (short)-32181;
_Bool var_2 = (_Bool)0;
long long int var_3 = 3638977986637516463LL;
unsigned short var_5 = (unsigned short)4648;
long long int var_8 = -3419723453944802060LL;
int zero = 0;
signed char var_10 = (signed char)-75;
unsigned short var_11 = (unsigned short)14816;
unsigned int var_12 = 3192845269U;
_Bool var_13 = (_Bool)0;
long long int var_14 = -7379703659314906651LL;
unsigned short arr_0 [21] ;
unsigned short arr_2 [21] ;
unsigned short arr_4 [21] [21] ;
unsigned int arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)56028 : (unsigned short)20578;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)12697;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)40396;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1165333472U : 2188755651U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
