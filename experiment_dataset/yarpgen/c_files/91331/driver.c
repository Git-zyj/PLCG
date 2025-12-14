#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3487865322186288997LL;
unsigned short var_1 = (unsigned short)18706;
unsigned short var_2 = (unsigned short)18115;
long long int var_3 = -6715974299850981726LL;
long long int var_4 = 4027224730960475305LL;
long long int var_5 = -146417211492288910LL;
long long int var_9 = -7958383403037603241LL;
int zero = 0;
unsigned int var_10 = 924588026U;
unsigned int var_11 = 3757751601U;
unsigned short var_12 = (unsigned short)59380;
unsigned long long int var_13 = 15745784376273029496ULL;
unsigned long long int var_14 = 15948835925568755733ULL;
unsigned short arr_2 [15] [15] ;
unsigned long long int arr_5 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)9888;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 15349581464223144975ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
