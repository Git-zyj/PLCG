#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)1840;
signed char var_2 = (signed char)-45;
unsigned long long int var_3 = 17722843753627492608ULL;
int var_4 = -1727622542;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-92;
short var_10 = (short)24794;
unsigned long long int var_12 = 11060978685713015206ULL;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3187516757U;
int var_17 = -1797858513;
int zero = 0;
unsigned long long int var_18 = 2801568699876797627ULL;
int var_19 = 967567638;
unsigned char var_20 = (unsigned char)175;
signed char var_21 = (signed char)-20;
long long int arr_2 [15] [15] ;
int arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = -6837745776489388404LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = -1168572322;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
