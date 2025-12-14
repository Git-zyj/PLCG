#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)3;
int var_3 = -15371369;
long long int var_5 = 5985052856143959092LL;
unsigned int var_10 = 2963327947U;
signed char var_12 = (signed char)1;
unsigned short var_13 = (unsigned short)63766;
int zero = 0;
unsigned short var_14 = (unsigned short)47907;
unsigned short var_15 = (unsigned short)61690;
long long int var_16 = -1532022276534758100LL;
unsigned char arr_0 [25] ;
int arr_1 [25] ;
_Bool arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 515483089;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
