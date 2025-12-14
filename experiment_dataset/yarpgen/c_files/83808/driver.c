#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10434648804652189245ULL;
signed char var_4 = (signed char)33;
unsigned long long int var_12 = 14759490006948232607ULL;
unsigned long long int var_15 = 16521474623615658654ULL;
int zero = 0;
unsigned long long int var_16 = 1488884485091100719ULL;
signed char var_17 = (signed char)119;
short var_18 = (short)7596;
unsigned long long int var_19 = 3440308845911774526ULL;
short var_20 = (short)-28835;
short var_21 = (short)4721;
unsigned long long int arr_0 [14] ;
unsigned long long int arr_2 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 4164118078577882208ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 2985938093638697503ULL;
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
