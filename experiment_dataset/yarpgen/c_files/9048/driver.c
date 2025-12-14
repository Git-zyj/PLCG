#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27548;
unsigned short var_3 = (unsigned short)29340;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)56776;
_Bool var_7 = (_Bool)0;
long long int var_9 = 3016325058236834947LL;
signed char var_11 = (signed char)-47;
unsigned long long int var_13 = 5537025315886401681ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)55159;
unsigned short var_18 = (unsigned short)59432;
long long int var_19 = -4553529761117269270LL;
_Bool var_20 = (_Bool)1;
unsigned short arr_0 [20] ;
unsigned short arr_1 [20] [20] ;
unsigned int arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)10556;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)3892;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 3498290075U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
