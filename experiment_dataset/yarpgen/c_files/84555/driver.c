#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48331;
int var_1 = -910284272;
short var_2 = (short)-1355;
unsigned int var_3 = 1969308091U;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 1734243810U;
long long int var_6 = -530084291558210970LL;
unsigned int var_7 = 1319049703U;
signed char var_8 = (signed char)-52;
unsigned long long int var_9 = 1665367030028306616ULL;
unsigned short var_10 = (unsigned short)14417;
unsigned char var_11 = (unsigned char)251;
int zero = 0;
int var_12 = -1491495333;
_Bool var_13 = (_Bool)1;
int var_14 = 179080790;
unsigned int var_15 = 881094505U;
unsigned long long int var_16 = 6203574596532116684ULL;
unsigned char var_17 = (unsigned char)117;
short var_18 = (short)-5287;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-54;
short arr_5 [17] ;
signed char arr_11 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-4897 : (short)13320;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-126 : (signed char)-73;
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
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
