#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7464;
unsigned int var_1 = 1726419770U;
unsigned long long int var_3 = 13426796730581858676ULL;
unsigned long long int var_8 = 10468075451417796122ULL;
unsigned char var_11 = (unsigned char)121;
int zero = 0;
unsigned long long int var_12 = 17286200907380608490ULL;
unsigned long long int var_13 = 13506228679157358793ULL;
short var_14 = (short)31470;
unsigned long long int var_15 = 8801792874344996892ULL;
unsigned long long int arr_4 [21] ;
short arr_7 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 4167639175564462521ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (short)13150;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
