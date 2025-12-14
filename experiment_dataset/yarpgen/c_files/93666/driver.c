#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6101;
unsigned long long int var_1 = 3306815665702766902ULL;
unsigned long long int var_4 = 4488523129024297457ULL;
signed char var_5 = (signed char)-31;
long long int var_8 = 8078897788751434594LL;
unsigned char var_13 = (unsigned char)31;
int zero = 0;
long long int var_15 = -7223779217603316377LL;
signed char var_16 = (signed char)-65;
signed char var_17 = (signed char)-82;
unsigned int var_18 = 1408848561U;
long long int var_19 = 6077391905079124116LL;
unsigned long long int arr_1 [20] [20] ;
int arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 9979525975318660855ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 1040498770;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
