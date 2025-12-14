#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 914402372U;
int var_4 = 571997107;
unsigned int var_5 = 1056340158U;
signed char var_7 = (signed char)-48;
int zero = 0;
unsigned long long int var_10 = 16435159137975792944ULL;
long long int var_11 = 6301698190462268701LL;
unsigned long long int var_12 = 2707899572740522831ULL;
int var_13 = -1403246464;
int arr_1 [14] ;
unsigned int arr_4 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -800834103 : -1090010824;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1153966045U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
