#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8548514116725212889LL;
unsigned long long int var_2 = 5610108613389052181ULL;
signed char var_3 = (signed char)-87;
unsigned long long int var_9 = 8498527256233628803ULL;
unsigned long long int var_11 = 13795380275828774469ULL;
int zero = 0;
short var_13 = (short)21785;
short var_14 = (short)-6848;
signed char var_15 = (signed char)59;
int var_16 = -1736911330;
unsigned long long int arr_3 [18] [18] ;
_Bool arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 2434062489001784852ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
