#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -868543904;
long long int var_1 = -92033793492391309LL;
long long int var_2 = -8915633361165322922LL;
long long int var_4 = -5602477751791323938LL;
unsigned int var_5 = 2574321754U;
int var_6 = 1556187130;
unsigned short var_7 = (unsigned short)56271;
long long int var_9 = -7668046605388867687LL;
unsigned long long int var_11 = 3350055344425317604ULL;
unsigned int var_12 = 678855755U;
int zero = 0;
unsigned int var_13 = 3943739362U;
unsigned char var_14 = (unsigned char)143;
signed char var_15 = (signed char)-7;
unsigned short var_16 = (unsigned short)18670;
unsigned long long int var_17 = 4346245354750467628ULL;
unsigned int arr_2 [19] ;
unsigned int arr_3 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3537676569U : 1175958538U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 1600806090U : 1314775148U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
