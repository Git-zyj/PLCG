#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15346597022142405251ULL;
unsigned long long int var_4 = 11153899663734164025ULL;
unsigned int var_5 = 1649342020U;
signed char var_7 = (signed char)79;
unsigned short var_8 = (unsigned short)23508;
unsigned int var_9 = 1340021944U;
unsigned long long int var_10 = 12723622815647178530ULL;
unsigned int var_12 = 1631550833U;
int var_13 = -1330473860;
int zero = 0;
unsigned short var_14 = (unsigned short)38909;
unsigned long long int var_15 = 17000988379989219667ULL;
unsigned short var_16 = (unsigned short)58084;
signed char arr_5 [12] ;
unsigned int arr_6 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = 2980675052U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
