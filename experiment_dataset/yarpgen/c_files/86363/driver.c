#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1959885732147712166LL;
unsigned char var_1 = (unsigned char)150;
_Bool var_2 = (_Bool)0;
int var_3 = 1348259687;
unsigned short var_4 = (unsigned short)41903;
unsigned char var_5 = (unsigned char)244;
short var_6 = (short)-30602;
unsigned char var_8 = (unsigned char)205;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-7893;
unsigned int var_11 = 4246467301U;
unsigned int var_12 = 2248412292U;
int zero = 0;
unsigned long long int var_13 = 6742136126997894552ULL;
long long int var_14 = -347657736457211950LL;
unsigned int var_15 = 527192824U;
unsigned int var_16 = 544624191U;
unsigned char var_17 = (unsigned char)2;
int var_18 = -792072962;
unsigned int arr_3 [12] [12] ;
unsigned long long int arr_5 [12] [12] ;
unsigned short arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 2374248977U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = 5406993041194295356ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned short)64902;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
