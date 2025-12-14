#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2127607042;
unsigned int var_3 = 46944863U;
unsigned char var_4 = (unsigned char)223;
int var_5 = -575376348;
unsigned long long int var_6 = 4661402643009088897ULL;
long long int var_9 = -7063285164127830776LL;
signed char var_10 = (signed char)-41;
unsigned char var_12 = (unsigned char)209;
int zero = 0;
signed char var_13 = (signed char)64;
unsigned short var_14 = (unsigned short)30810;
signed char var_15 = (signed char)-52;
int var_16 = -852103293;
int var_17 = -287460123;
int arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1456430405 : 62234076;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
