#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_5 = (short)7793;
unsigned long long int var_10 = 16124250310465819784ULL;
unsigned short var_14 = (unsigned short)17412;
unsigned long long int var_16 = 15094726019990663788ULL;
int zero = 0;
long long int var_20 = 353562682216842578LL;
unsigned long long int var_21 = 10620819216948727594ULL;
int var_22 = 824470134;
unsigned long long int arr_0 [17] ;
short arr_2 [17] ;
short arr_3 [17] ;
unsigned long long int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 2215480698743141540ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)-32238;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-13495 : (short)-22063;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3593089771403645101ULL : 5822613942975539719ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
