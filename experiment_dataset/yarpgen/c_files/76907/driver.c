#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2083;
int var_2 = -249520169;
long long int var_7 = 641908058269353907LL;
unsigned short var_8 = (unsigned short)6006;
int var_9 = -39511700;
long long int var_13 = 9217098136224181026LL;
long long int var_14 = 6685377682658268659LL;
unsigned short var_15 = (unsigned short)32700;
int zero = 0;
unsigned short var_16 = (unsigned short)55736;
int var_17 = -894650520;
unsigned char arr_0 [14] ;
int arr_1 [14] ;
unsigned char arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -1491801056;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned char)131;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
