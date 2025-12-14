#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6738292954924767149LL;
unsigned long long int var_1 = 15065676849537580361ULL;
int var_2 = -301290334;
unsigned short var_4 = (unsigned short)19273;
unsigned short var_7 = (unsigned short)2292;
long long int var_9 = -5123577914954688890LL;
int var_10 = -525767709;
unsigned char var_13 = (unsigned char)174;
int zero = 0;
unsigned int var_16 = 508733472U;
unsigned long long int var_17 = 15818964951527793224ULL;
unsigned char var_18 = (unsigned char)189;
short var_19 = (short)1611;
unsigned char var_20 = (unsigned char)152;
long long int var_21 = 603099760775321166LL;
unsigned char arr_0 [25] ;
unsigned short arr_3 [25] [25] [25] ;
_Bool arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)28043;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
