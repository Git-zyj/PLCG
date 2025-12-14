#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1515577528;
_Bool var_6 = (_Bool)0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3771938598U;
int zero = 0;
long long int var_18 = 2600632218432049893LL;
long long int var_19 = -5806201665884495394LL;
unsigned int var_20 = 3142012321U;
int var_21 = -1554156622;
unsigned short var_22 = (unsigned short)17575;
unsigned int arr_1 [13] ;
unsigned short arr_3 [13] ;
long long int arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 1450716435U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)35436;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = -3634667657087573315LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
