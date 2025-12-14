#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7721387588873128567LL;
signed char var_3 = (signed char)47;
int var_4 = 1508637111;
long long int var_5 = 2832433115641194040LL;
unsigned short var_7 = (unsigned short)8116;
unsigned long long int var_11 = 10418513425406754382ULL;
long long int var_12 = -2635092926715777030LL;
int zero = 0;
int var_13 = 850588196;
signed char var_14 = (signed char)-79;
unsigned int var_15 = 1251533028U;
long long int var_16 = 6636044845233769878LL;
int var_17 = -511612697;
unsigned short var_18 = (unsigned short)34979;
long long int arr_3 [16] ;
unsigned long long int arr_7 [16] [16] [16] [16] ;
signed char arr_16 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 145248003783190128LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 1550156629911070310ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (signed char)51 : (signed char)-56;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
