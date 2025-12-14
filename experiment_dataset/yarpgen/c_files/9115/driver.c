#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)41084;
long long int var_10 = 1393515740048381378LL;
long long int var_12 = -7770648255688155577LL;
unsigned long long int var_13 = 15608159393263660352ULL;
unsigned short var_16 = (unsigned short)44038;
int zero = 0;
unsigned short var_19 = (unsigned short)4877;
int var_20 = -886204476;
long long int var_21 = -6134034517840564596LL;
long long int var_22 = -8582174366936219366LL;
unsigned int var_23 = 2870166587U;
unsigned char var_24 = (unsigned char)235;
int arr_1 [16] ;
unsigned long long int arr_4 [22] ;
short arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -1443090847 : -933412007;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 16185072237550471381ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)21771 : (short)-18934;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
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
