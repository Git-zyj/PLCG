#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1334645426;
unsigned long long int var_7 = 12189463945294460446ULL;
unsigned int var_8 = 4073347070U;
int zero = 0;
unsigned int var_11 = 638488106U;
unsigned int var_12 = 3746670505U;
unsigned char var_13 = (unsigned char)64;
unsigned int var_14 = 4212625048U;
unsigned int var_15 = 1250291425U;
signed char arr_0 [16] ;
unsigned char arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)39;
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
