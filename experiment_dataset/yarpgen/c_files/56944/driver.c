#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1126488377U;
long long int var_3 = -6072580833739282370LL;
unsigned long long int var_6 = 9172690884362837367ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 10335295206168688597ULL;
unsigned long long int var_10 = 17372401313020487304ULL;
int zero = 0;
signed char var_14 = (signed char)79;
int var_15 = 1301817554;
unsigned int var_16 = 2295979147U;
signed char var_17 = (signed char)22;
unsigned short var_18 = (unsigned short)40719;
long long int var_19 = 5384064880097371716LL;
long long int arr_0 [21] ;
unsigned long long int arr_1 [21] ;
unsigned char arr_2 [21] [21] ;
unsigned int arr_4 [21] ;
long long int arr_5 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 6743736605860305553LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 1445537380040449990ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)230 : (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 1637140576U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = -2036556123858988968LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
