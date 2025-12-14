#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26622;
signed char var_2 = (signed char)51;
long long int var_3 = 62067828637796743LL;
unsigned long long int var_4 = 4835776981852041444ULL;
_Bool var_5 = (_Bool)0;
long long int var_6 = -7347941187134587184LL;
signed char var_7 = (signed char)-77;
short var_9 = (short)5271;
int var_10 = 777790710;
int var_12 = -968242883;
int zero = 0;
unsigned int var_13 = 2163197380U;
unsigned int var_14 = 2368661345U;
unsigned short var_15 = (unsigned short)45845;
unsigned short var_16 = (unsigned short)2186;
long long int var_17 = -1344098878969352441LL;
long long int var_18 = 8214294694084855434LL;
unsigned int var_19 = 3281107530U;
unsigned long long int var_20 = 11822590326833058937ULL;
signed char var_21 = (signed char)-35;
unsigned short var_22 = (unsigned short)9889;
_Bool var_23 = (_Bool)0;
long long int var_24 = -6461343896774136574LL;
int var_25 = -2133925431;
long long int arr_1 [16] ;
unsigned int arr_2 [16] [16] [16] ;
int arr_3 [16] [16] ;
long long int arr_4 [16] [16] [16] ;
short arr_6 [17] [17] ;
_Bool arr_7 [17] [17] ;
unsigned short arr_11 [18] ;
unsigned long long int arr_8 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 95600512551964397LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1456636059U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = -1680435307;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 517291493461688333LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-13851 : (short)10267;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (unsigned short)13160;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 345736558502763127ULL : 6195295026940388290ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
