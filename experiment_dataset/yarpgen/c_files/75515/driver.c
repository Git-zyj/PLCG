#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28389;
int var_1 = 1261230;
unsigned char var_2 = (unsigned char)210;
unsigned char var_7 = (unsigned char)216;
unsigned char var_9 = (unsigned char)47;
unsigned long long int var_11 = 4901811890737646637ULL;
int zero = 0;
unsigned long long int var_13 = 10956691124301984266ULL;
unsigned int var_14 = 2202948176U;
unsigned int var_15 = 3917500428U;
unsigned long long int var_16 = 11712640173290196425ULL;
unsigned int arr_2 [11] ;
long long int arr_3 [11] [11] ;
_Bool arr_4 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 876693678U : 2779979905U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 7823666908846140616LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
