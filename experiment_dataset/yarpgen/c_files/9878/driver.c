#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11119431867205709470ULL;
signed char var_3 = (signed char)-111;
unsigned long long int var_5 = 8385309022207522648ULL;
signed char var_6 = (signed char)-36;
unsigned int var_7 = 56698313U;
short var_8 = (short)-12932;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_10 = 2877975836304567076LL;
signed char var_11 = (signed char)79;
short var_12 = (short)3913;
short var_13 = (short)-26485;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 16468276427526201204ULL;
unsigned int var_16 = 3667620066U;
unsigned short arr_0 [11] ;
unsigned int arr_3 [16] [16] ;
unsigned int arr_4 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)34690;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 3443599311U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 4150755431U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
