#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2071956745;
unsigned long long int var_3 = 5079389006732721884ULL;
unsigned long long int var_4 = 3702805644187672800ULL;
int var_6 = 679863138;
int var_8 = 982324294;
unsigned long long int var_10 = 4189504123547704393ULL;
unsigned int var_15 = 439639569U;
unsigned short var_17 = (unsigned short)20394;
unsigned long long int var_18 = 8518788068032659302ULL;
int zero = 0;
int var_20 = 1316331275;
unsigned char var_21 = (unsigned char)43;
unsigned char var_22 = (unsigned char)211;
short arr_3 [22] ;
long long int arr_4 [22] [22] ;
unsigned int arr_2 [22] ;
unsigned long long int arr_8 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)17172 : (short)-30936;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? -131369401752971689LL : -953689649230535001LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 948069240U : 3843870958U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 3168456102126381331ULL : 3851283126409853609ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
