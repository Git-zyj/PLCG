#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 945897301639129816ULL;
int var_2 = -1095112358;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)14;
unsigned long long int var_6 = 16870242512776091295ULL;
unsigned long long int var_8 = 16608287484693356402ULL;
long long int var_9 = -5084930119576656794LL;
int zero = 0;
long long int var_10 = -7656684646107249591LL;
short var_11 = (short)-16108;
unsigned long long int var_12 = 8384162691406557459ULL;
unsigned long long int var_13 = 7363148341389448678ULL;
unsigned char var_14 = (unsigned char)179;
unsigned short arr_0 [16] [16] ;
int arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)5658 : (unsigned short)33923;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 515773867 : -354643128;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
