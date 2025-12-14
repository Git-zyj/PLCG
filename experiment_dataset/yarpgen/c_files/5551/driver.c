#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15207743025473980672ULL;
unsigned long long int var_5 = 4343568236068013103ULL;
unsigned long long int var_9 = 3695506891246433038ULL;
unsigned long long int var_13 = 9560253813573308187ULL;
unsigned long long int var_15 = 560831421430502882ULL;
unsigned long long int var_17 = 2286933876939783144ULL;
int zero = 0;
unsigned long long int var_20 = 407195094176602949ULL;
unsigned long long int var_21 = 2866231818356183897ULL;
unsigned long long int var_22 = 935569027468642220ULL;
unsigned long long int arr_0 [16] [16] ;
unsigned long long int arr_2 [16] ;
unsigned long long int arr_3 [16] ;
unsigned long long int arr_4 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 12464774551522214064ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 6816533976746615593ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 1625499379760167910ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 1861905987662647248ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
