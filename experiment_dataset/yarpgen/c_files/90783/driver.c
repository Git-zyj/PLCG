#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)84;
int var_2 = -1347411328;
signed char var_3 = (signed char)-27;
unsigned int var_6 = 1663560261U;
int var_7 = 95059751;
unsigned int var_8 = 1910781843U;
long long int var_9 = 9186906578446327748LL;
unsigned long long int var_10 = 6211553013982571681ULL;
signed char var_11 = (signed char)-85;
int var_15 = -618810961;
int zero = 0;
unsigned long long int var_16 = 11451142669563988573ULL;
unsigned int var_17 = 1471770854U;
signed char var_18 = (signed char)-98;
long long int var_19 = -5426341336677617192LL;
long long int var_20 = -5573063434198001871LL;
long long int var_21 = -294371758791090987LL;
unsigned int var_22 = 138281828U;
unsigned int var_23 = 1617486661U;
signed char var_24 = (signed char)-95;
unsigned int var_25 = 270394389U;
signed char var_26 = (signed char)-15;
int var_27 = -1446968221;
long long int arr_1 [17] ;
unsigned int arr_2 [17] ;
int arr_4 [17] [17] [17] ;
unsigned int arr_9 [24] [24] [24] ;
long long int arr_10 [24] [24] ;
unsigned long long int arr_11 [24] [24] ;
unsigned long long int arr_3 [17] [17] ;
signed char arr_12 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -7749932838145101002LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 316366828U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1127431850;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 3567665865U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = 2857008840342102454LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = 7530541646280703314ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 12116449005940887242ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (signed char)-13;
}

void checksum() {
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
