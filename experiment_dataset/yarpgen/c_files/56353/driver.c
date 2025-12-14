#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_4 = (unsigned short)26480;
signed char var_5 = (signed char)57;
unsigned long long int var_8 = 5208993827473123197ULL;
long long int var_9 = -1934752431464512320LL;
unsigned short var_10 = (unsigned short)56670;
long long int var_11 = 2157375142535677027LL;
unsigned short var_13 = (unsigned short)37884;
long long int var_14 = 365118888222988123LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 5571563623316992479ULL;
unsigned long long int var_17 = 6082713198915524370ULL;
unsigned long long int var_18 = 4152509323477978495ULL;
unsigned long long int var_19 = 7603498079884456015ULL;
unsigned long long int arr_3 [11] ;
unsigned long long int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 8861974377200400493ULL : 5681622444036218478ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 4457635286039168908ULL : 1480889312690873750ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
