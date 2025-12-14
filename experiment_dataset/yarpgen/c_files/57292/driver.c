#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17300488792565101696ULL;
short var_1 = (short)-6151;
signed char var_4 = (signed char)104;
unsigned long long int var_8 = 9868795711037309282ULL;
short var_10 = (short)-7531;
long long int var_11 = -3538049899464876831LL;
int zero = 0;
short var_14 = (short)-15043;
long long int var_15 = -6405457162607558109LL;
short var_16 = (short)-22352;
unsigned long long int var_17 = 217353752242904525ULL;
long long int var_18 = 1930272853932129991LL;
long long int var_19 = 3738279524728268791LL;
short var_20 = (short)-25773;
short var_21 = (short)29433;
signed char var_22 = (signed char)4;
unsigned long long int var_23 = 10969065937826635370ULL;
signed char var_24 = (signed char)-75;
signed char var_25 = (signed char)88;
long long int arr_0 [14] ;
long long int arr_2 [14] [14] [14] ;
long long int arr_3 [14] [14] [14] ;
long long int arr_7 [18] [18] ;
signed char arr_8 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 7020761530254153538LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 7635778029354962059LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2509333648697059043LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = -7554018992721368506LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (signed char)-48;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
