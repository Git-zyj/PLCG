#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 756666828U;
unsigned char var_2 = (unsigned char)1;
unsigned int var_3 = 4008518826U;
unsigned int var_5 = 1641230795U;
unsigned int var_7 = 3488523870U;
signed char var_9 = (signed char)123;
int zero = 0;
unsigned short var_10 = (unsigned short)350;
unsigned int var_11 = 1345077053U;
unsigned long long int var_12 = 4215445680979763918ULL;
int arr_1 [11] [11] ;
signed char arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 879793556;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)40;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
