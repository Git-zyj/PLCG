#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14207;
long long int var_3 = -7921679189147787993LL;
int var_6 = -1770737535;
_Bool var_8 = (_Bool)1;
int var_9 = 1898428366;
unsigned int var_10 = 4136304325U;
int var_11 = 886113527;
unsigned long long int var_12 = 1495923368838191744ULL;
unsigned long long int var_15 = 11187492393039550137ULL;
unsigned long long int var_16 = 12233230064520685296ULL;
int zero = 0;
unsigned long long int var_18 = 10716071744823667201ULL;
unsigned int var_19 = 4284538408U;
int var_20 = 1058617885;
short var_21 = (short)-10209;
unsigned char var_22 = (unsigned char)26;
unsigned long long int var_23 = 5367383619144575495ULL;
unsigned long long int arr_1 [14] ;
unsigned char arr_2 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 1002681924388763952ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)241;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
