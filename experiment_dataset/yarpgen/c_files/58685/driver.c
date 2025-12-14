#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 899508164U;
unsigned short var_10 = (unsigned short)53672;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 3419927958U;
unsigned int var_19 = 3499951427U;
long long int var_20 = 7719555824952248970LL;
unsigned int var_21 = 2897554911U;
unsigned char var_22 = (unsigned char)189;
long long int arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -3461764561396380971LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
