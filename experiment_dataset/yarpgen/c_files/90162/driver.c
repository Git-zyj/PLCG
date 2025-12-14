#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13108112584125956086ULL;
unsigned char var_3 = (unsigned char)205;
unsigned long long int var_4 = 15544544439649287800ULL;
unsigned long long int var_5 = 16901708728742427443ULL;
unsigned char var_6 = (unsigned char)56;
short var_8 = (short)-22907;
unsigned char var_10 = (unsigned char)152;
int zero = 0;
unsigned char var_11 = (unsigned char)202;
unsigned char var_12 = (unsigned char)116;
unsigned long long int var_13 = 12171935564125343384ULL;
unsigned int var_14 = 1212098835U;
_Bool var_15 = (_Bool)1;
long long int arr_0 [11] ;
unsigned char arr_1 [11] ;
unsigned long long int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 7777922458069109014LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 2608241084184797464ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
