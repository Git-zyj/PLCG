#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2805375881U;
unsigned int var_2 = 1231013360U;
unsigned int var_3 = 1479176376U;
unsigned int var_6 = 905767046U;
unsigned int var_7 = 922842754U;
unsigned int var_11 = 4017770745U;
unsigned int var_12 = 2107609331U;
int zero = 0;
unsigned int var_18 = 1200919272U;
unsigned int var_19 = 2771543415U;
unsigned int var_20 = 2492749297U;
unsigned int var_21 = 1404689409U;
unsigned int var_22 = 1685360150U;
unsigned int var_23 = 4130900282U;
unsigned int var_24 = 1328273329U;
unsigned int var_25 = 2775897588U;
unsigned int arr_0 [18] ;
unsigned int arr_1 [18] [18] ;
unsigned int arr_2 [18] ;
unsigned int arr_5 [18] [18] ;
unsigned int arr_3 [18] ;
unsigned int arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 2324715941U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 1997195315U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 1891498142U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 546682911U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 2311345224U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 317629257U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
