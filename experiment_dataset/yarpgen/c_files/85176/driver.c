#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 61471292U;
signed char var_3 = (signed char)122;
short var_4 = (short)26955;
unsigned int var_6 = 3291252689U;
unsigned short var_9 = (unsigned short)16336;
unsigned char var_10 = (unsigned char)239;
int var_12 = -91508958;
unsigned int var_13 = 2239564676U;
int zero = 0;
unsigned long long int var_16 = 2804331052168388105ULL;
int var_17 = 505377260;
long long int var_18 = 8953661158277039855LL;
long long int var_19 = -1466868849418354336LL;
int arr_3 [18] [18] [18] ;
unsigned int arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1189589315;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 1488188825U : 3594388784U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
