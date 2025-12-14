#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1605207023U;
unsigned int var_2 = 924422571U;
unsigned long long int var_4 = 11981363578154768235ULL;
int var_6 = -1590589834;
unsigned long long int var_8 = 9621431477678280994ULL;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)242;
signed char var_12 = (signed char)55;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-77;
long long int var_15 = 2397177193346866903LL;
unsigned long long int var_16 = 18255598447618683053ULL;
int arr_2 [17] [17] ;
unsigned long long int arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 1997957324;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 7856348090274000945ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
