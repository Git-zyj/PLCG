#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1895208859;
unsigned short var_1 = (unsigned short)10982;
long long int var_2 = -6294506768419977819LL;
int var_4 = -888578398;
unsigned int var_7 = 2683309321U;
unsigned short var_13 = (unsigned short)39942;
int zero = 0;
unsigned char var_15 = (unsigned char)52;
unsigned int var_16 = 1740034121U;
unsigned char var_17 = (unsigned char)77;
unsigned char var_18 = (unsigned char)150;
int var_19 = 582292317;
unsigned short var_20 = (unsigned short)59189;
unsigned long long int arr_0 [22] ;
long long int arr_4 [22] [22] ;
unsigned char arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 18005553324337787332ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 4830463411042730988LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)81 : (unsigned char)21;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
