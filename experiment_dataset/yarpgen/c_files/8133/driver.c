#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4994653805891964339LL;
long long int var_3 = 3516994754126361670LL;
unsigned short var_7 = (unsigned short)42741;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_12 = 8241295312350400481LL;
long long int var_13 = 2086731671426112129LL;
int var_14 = -1270369030;
unsigned char var_15 = (unsigned char)74;
long long int var_16 = 7585981510273513209LL;
unsigned short var_17 = (unsigned short)43544;
long long int var_18 = 5279544970362483460LL;
unsigned int var_19 = 145724493U;
_Bool arr_10 [20] ;
int arr_11 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 1395968805 : -2068002968;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
