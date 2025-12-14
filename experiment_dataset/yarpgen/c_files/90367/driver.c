#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 813290169U;
long long int var_1 = 1298172431456696564LL;
unsigned char var_8 = (unsigned char)67;
int zero = 0;
unsigned int var_11 = 2469970906U;
unsigned long long int var_12 = 2156443250123378855ULL;
long long int var_13 = 7909400962938034897LL;
int var_14 = 938459549;
unsigned short var_15 = (unsigned short)18837;
unsigned long long int arr_2 [15] [15] ;
unsigned long long int arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 1095712506146647501ULL : 17626045779106724704ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 4317476547955805209ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
