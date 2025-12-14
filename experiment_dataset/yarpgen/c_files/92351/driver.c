#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7081300967174647037LL;
unsigned char var_2 = (unsigned char)253;
int var_3 = 130502272;
unsigned int var_5 = 1240166416U;
unsigned long long int var_10 = 4454964649683680701ULL;
unsigned long long int var_12 = 11998788605435903371ULL;
int zero = 0;
int var_13 = 834276013;
_Bool var_14 = (_Bool)0;
int var_15 = -2132637573;
long long int var_16 = 8679208103416134397LL;
_Bool arr_0 [24] ;
unsigned short arr_1 [24] [24] ;
int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)55832 : (unsigned short)14639;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -796569341 : -1058124408;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
