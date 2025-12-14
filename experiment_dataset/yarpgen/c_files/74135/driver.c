#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18735;
unsigned short var_6 = (unsigned short)47328;
short var_8 = (short)22114;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 4883862773901553359ULL;
int var_14 = -1278756377;
unsigned char var_15 = (unsigned char)223;
int var_18 = -351904165;
int zero = 0;
long long int var_19 = -8923521750018253245LL;
unsigned short var_20 = (unsigned short)27003;
signed char var_21 = (signed char)1;
int var_22 = -749790476;
long long int arr_0 [21] [21] ;
unsigned int arr_1 [21] ;
unsigned short arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = -851800317826373484LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 2955803990U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)251;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
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
