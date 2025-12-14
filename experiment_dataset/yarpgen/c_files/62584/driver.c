#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 326785375746078068ULL;
unsigned long long int var_4 = 18288782769241783383ULL;
unsigned long long int var_6 = 740238352144176920ULL;
unsigned long long int var_9 = 16579757566141835035ULL;
int zero = 0;
unsigned long long int var_12 = 2247971966356707969ULL;
unsigned long long int var_13 = 15637597376697331558ULL;
unsigned long long int var_14 = 10516933182873815627ULL;
unsigned long long int arr_0 [14] ;
unsigned long long int arr_1 [14] ;
unsigned long long int arr_2 [14] [14] ;
unsigned long long int arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 9694944292555194143ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 5194556715499379018ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 12211673238312890876ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 5663976021561828899ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
