#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16230708285937698152ULL;
_Bool var_6 = (_Bool)1;
int var_8 = -1075616430;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_17 = -1183218653089436552LL;
unsigned short var_18 = (unsigned short)49664;
unsigned char var_19 = (unsigned char)112;
int var_20 = 1809252396;
int var_21 = -209037797;
long long int var_22 = 1969433453241491525LL;
unsigned long long int var_23 = 10878619298237707351ULL;
long long int arr_0 [21] ;
int arr_1 [21] ;
int arr_8 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 3830985265620520280LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 814730446;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = 555092202;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
