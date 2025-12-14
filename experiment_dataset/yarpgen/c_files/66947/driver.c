#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13707;
unsigned long long int var_1 = 12112087467645474396ULL;
unsigned int var_3 = 889469964U;
short var_5 = (short)-14476;
signed char var_7 = (signed char)-112;
long long int var_10 = -5834209709873171763LL;
unsigned short var_12 = (unsigned short)37264;
long long int var_13 = -1396861641670693012LL;
unsigned short var_15 = (unsigned short)43260;
unsigned short var_16 = (unsigned short)39096;
unsigned long long int var_17 = 7419927351303812356ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = 2984868230283185981LL;
long long int var_21 = -7530889289960238027LL;
long long int arr_1 [21] ;
long long int arr_3 [21] ;
long long int arr_4 [21] ;
unsigned int arr_5 [21] ;
unsigned short arr_6 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 5312100298619613054LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -3843627873538966313LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = -375276915369891590LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 1256279651U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)53344;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
