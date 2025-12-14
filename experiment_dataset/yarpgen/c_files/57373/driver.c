#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1453242330518837098LL;
unsigned char var_4 = (unsigned char)194;
long long int var_6 = -6932862292188269875LL;
unsigned long long int var_7 = 10805964867601560989ULL;
unsigned char var_8 = (unsigned char)167;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 810354938071618233ULL;
int var_12 = -530056103;
int zero = 0;
unsigned long long int var_16 = 1588497857307426507ULL;
unsigned char var_17 = (unsigned char)194;
unsigned int var_18 = 3299785117U;
unsigned int var_19 = 1746200851U;
unsigned char var_20 = (unsigned char)152;
unsigned char arr_0 [19] ;
int arr_2 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 669291073;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
