#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17737;
signed char var_1 = (signed char)-118;
short var_2 = (short)-20523;
unsigned int var_3 = 2842749922U;
unsigned long long int var_4 = 17719919158781490719ULL;
unsigned char var_5 = (unsigned char)31;
unsigned int var_13 = 3004165252U;
unsigned int var_15 = 3994108949U;
int zero = 0;
unsigned int var_17 = 90788373U;
unsigned int var_18 = 4181990177U;
unsigned long long int var_19 = 3058132173340250595ULL;
long long int var_20 = 3568948195642635437LL;
short arr_0 [16] [16] ;
_Bool arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-31896;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
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
