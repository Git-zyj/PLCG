#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3741097076973209850ULL;
unsigned long long int var_2 = 9956817012188798097ULL;
unsigned long long int var_9 = 11633047045163977646ULL;
int zero = 0;
unsigned long long int var_10 = 12424521616201820418ULL;
unsigned long long int var_11 = 5379040666302904834ULL;
unsigned long long int var_12 = 5485226951620572898ULL;
unsigned long long int arr_3 [21] ;
unsigned long long int arr_5 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 5724064062734681526ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 6643468894526562078ULL;
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
