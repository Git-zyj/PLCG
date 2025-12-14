#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5743333826637157356ULL;
int var_2 = -1110858703;
unsigned char var_4 = (unsigned char)74;
short var_9 = (short)-17217;
long long int var_11 = -1008016969107535697LL;
int var_12 = 1855566824;
_Bool var_14 = (_Bool)1;
unsigned long long int var_16 = 13739900635498101200ULL;
int zero = 0;
unsigned long long int var_18 = 16611785268582556904ULL;
unsigned long long int var_19 = 9977677607278372060ULL;
unsigned int var_20 = 4129543872U;
short var_21 = (short)-7692;
unsigned short var_22 = (unsigned short)37617;
long long int var_23 = -587167936103845788LL;
short arr_1 [21] ;
long long int arr_4 [24] [24] ;
short arr_6 [24] [24] ;
_Bool arr_7 [24] ;
long long int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)12088;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 1641609154474404185LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-16402;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 6666224989582306922LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
