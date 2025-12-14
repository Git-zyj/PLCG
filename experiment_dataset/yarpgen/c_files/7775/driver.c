#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-98;
unsigned char var_5 = (unsigned char)190;
unsigned char var_8 = (unsigned char)77;
_Bool var_9 = (_Bool)1;
int var_10 = -449272660;
int zero = 0;
unsigned short var_11 = (unsigned short)63596;
unsigned long long int var_12 = 1878383078625374513ULL;
unsigned long long int var_13 = 5158439054090379285ULL;
unsigned short var_14 = (unsigned short)15364;
signed char var_15 = (signed char)90;
int arr_0 [15] ;
unsigned long long int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -452730196;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 11324641273476644381ULL;
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
