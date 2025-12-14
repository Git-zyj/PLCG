#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7164218538849181529LL;
unsigned int var_1 = 463241266U;
unsigned char var_2 = (unsigned char)75;
unsigned char var_3 = (unsigned char)121;
short var_4 = (short)-2277;
unsigned long long int var_5 = 5821622113228179057ULL;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)38;
unsigned long long int var_9 = 12823503120697512120ULL;
int zero = 0;
unsigned int var_16 = 1340866635U;
unsigned char var_17 = (unsigned char)208;
unsigned char var_18 = (unsigned char)111;
unsigned long long int var_19 = 2564543343562019539ULL;
int var_20 = -1937469099;
_Bool var_21 = (_Bool)0;
int arr_0 [20] ;
_Bool arr_1 [20] [20] ;
int arr_2 [20] [20] ;
long long int arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 1705749018;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = -1307843473;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -3033581319205555008LL;
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
