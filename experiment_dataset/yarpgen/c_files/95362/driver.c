#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 577627437749107048LL;
long long int var_5 = 2626062336209197120LL;
long long int var_6 = 7114793125429446864LL;
long long int var_7 = 5080782268703523880LL;
long long int var_8 = -3939362500298601965LL;
long long int var_9 = 5945998573089541492LL;
int zero = 0;
long long int var_10 = -5050351180575818318LL;
long long int var_11 = -8636072397931795251LL;
long long int var_12 = 8503424998421709164LL;
long long int var_13 = -7910378328289121601LL;
long long int var_14 = 4735366237036868021LL;
long long int var_15 = -7472647159564609442LL;
long long int arr_3 [10] [10] [10] ;
long long int arr_5 [10] [10] ;
long long int arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -3847817280161408721LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = 1029447559998114792LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = -3441013394675579091LL;
}

void checksum() {
    hash(&seed, var_10);
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
