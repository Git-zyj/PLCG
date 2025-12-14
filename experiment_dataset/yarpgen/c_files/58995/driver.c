#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20787;
short var_1 = (short)16250;
int var_2 = -1906795537;
int zero = 0;
unsigned short var_17 = (unsigned short)45779;
signed char var_18 = (signed char)-51;
short var_19 = (short)19801;
unsigned long long int arr_1 [11] [11] ;
unsigned long long int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 12041722156685244565ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 2546706301063696873ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
