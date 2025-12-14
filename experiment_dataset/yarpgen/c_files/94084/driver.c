#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)117;
unsigned long long int var_4 = 13584491896426427530ULL;
_Bool var_7 = (_Bool)1;
int var_8 = 778190642;
unsigned long long int var_13 = 15738248207513745049ULL;
int zero = 0;
int var_16 = -888330083;
int var_17 = 1918791480;
unsigned short var_18 = (unsigned short)27935;
unsigned short var_19 = (unsigned short)49940;
_Bool var_20 = (_Bool)0;
int var_21 = -674165797;
unsigned long long int var_22 = 3004310207959761107ULL;
int arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1700141514;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
