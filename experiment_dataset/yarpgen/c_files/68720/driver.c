#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 830776572U;
long long int var_1 = 844011003790704387LL;
long long int var_2 = 906131790739336377LL;
short var_3 = (short)3860;
long long int var_4 = 5702017687567122651LL;
long long int var_5 = 6997427810882084235LL;
short var_6 = (short)10245;
unsigned short var_9 = (unsigned short)3469;
int zero = 0;
int var_10 = -1177638121;
signed char var_11 = (signed char)34;
long long int var_12 = -7670430266948012268LL;
long long int var_13 = -3120007590172393109LL;
short var_14 = (short)-23757;
unsigned short arr_2 [15] ;
int arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)37733 : (unsigned short)50763;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -556240639 : -1361336654;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
