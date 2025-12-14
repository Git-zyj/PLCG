#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 913006227U;
unsigned int var_1 = 3984963147U;
unsigned int var_10 = 2495566748U;
unsigned int var_13 = 3789306092U;
unsigned long long int var_14 = 14976965763538584968ULL;
unsigned long long int var_15 = 16324115513195261306ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)19;
unsigned int var_20 = 2420492567U;
unsigned long long int var_21 = 9968388657443545771ULL;
unsigned int var_22 = 2892003405U;
unsigned char var_23 = (unsigned char)152;
unsigned long long int var_24 = 15433056099361185812ULL;
unsigned int var_25 = 813537613U;
unsigned long long int var_26 = 13928351845163247722ULL;
unsigned long long int var_27 = 13346710421481480799ULL;
unsigned long long int var_28 = 16150345217289837981ULL;
unsigned int arr_0 [21] [21] ;
unsigned int arr_12 [10] [10] ;
unsigned long long int arr_13 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 52929266U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = 3641863566U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = 9857709287316391625ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
