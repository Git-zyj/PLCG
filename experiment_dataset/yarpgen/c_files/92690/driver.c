#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)3192;
signed char var_2 = (signed char)19;
unsigned long long int var_3 = 7957597481618822554ULL;
int var_5 = 1660262996;
unsigned short var_7 = (unsigned short)45829;
unsigned short var_8 = (unsigned short)54145;
unsigned char var_10 = (unsigned char)169;
unsigned long long int var_14 = 14947612068089644967ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)176;
_Bool var_16 = (_Bool)0;
long long int var_17 = -8103619322481205829LL;
unsigned char var_18 = (unsigned char)22;
unsigned long long int var_19 = 11464536680507721318ULL;
long long int arr_2 [15] ;
long long int arr_6 [15] ;
unsigned long long int arr_7 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3765261636055871761LL : 367861513110575440LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 8672756758080826549LL : 7132890782601023402LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 8683222697244167412ULL : 9397021885173418316ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
