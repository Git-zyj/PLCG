#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3505064615973509493ULL;
unsigned int var_1 = 1881130283U;
unsigned short var_2 = (unsigned short)18944;
int var_6 = -148537863;
unsigned short var_7 = (unsigned short)41542;
_Bool var_8 = (_Bool)0;
signed char var_12 = (signed char)-79;
int zero = 0;
long long int var_19 = -8053632126931309546LL;
long long int var_20 = 4488996221904659733LL;
long long int var_21 = 699530282231185782LL;
long long int arr_0 [25] ;
unsigned long long int arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -7860001169870865723LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 6775644695023041125ULL;
}

void checksum() {
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
