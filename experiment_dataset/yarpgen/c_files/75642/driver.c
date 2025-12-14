#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4275823685432011718LL;
short var_9 = (short)17700;
long long int var_13 = 8286201492768483274LL;
unsigned short var_15 = (unsigned short)49231;
int zero = 0;
short var_20 = (short)-4122;
long long int var_21 = 5820184665768632021LL;
unsigned long long int var_22 = 1706505562622240334ULL;
unsigned int var_23 = 844520848U;
short var_24 = (short)-5585;
unsigned long long int var_25 = 10204683489964125260ULL;
short arr_1 [19] [19] ;
long long int arr_5 [19] ;
unsigned short arr_10 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (short)23237;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 1813880558507489754LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (unsigned short)50555;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
