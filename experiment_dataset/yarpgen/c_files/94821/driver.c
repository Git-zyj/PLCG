#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47229;
unsigned char var_3 = (unsigned char)185;
long long int var_6 = 2505788038969231332LL;
unsigned int var_16 = 2554692683U;
int zero = 0;
unsigned long long int var_17 = 17140474363113169460ULL;
unsigned long long int var_18 = 3836538118339935336ULL;
unsigned short var_19 = (unsigned short)56126;
signed char var_20 = (signed char)-69;
signed char arr_3 [24] ;
long long int arr_5 [24] ;
unsigned char arr_6 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (signed char)-112;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 5732280012792966106LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)189;
}

void checksum() {
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
