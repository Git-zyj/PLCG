#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 163023695;
unsigned char var_3 = (unsigned char)139;
signed char var_4 = (signed char)-118;
signed char var_5 = (signed char)57;
unsigned long long int var_7 = 14635317365256300149ULL;
signed char var_8 = (signed char)-13;
unsigned short var_9 = (unsigned short)33403;
signed char var_10 = (signed char)-14;
int zero = 0;
int var_12 = 1437753557;
unsigned int var_13 = 1185464497U;
unsigned short var_14 = (unsigned short)55045;
unsigned int var_15 = 1218592262U;
signed char var_16 = (signed char)93;
unsigned int var_17 = 3762813279U;
int var_18 = 1195946684;
unsigned short var_19 = (unsigned short)28728;
unsigned int var_20 = 2264048408U;
unsigned int arr_3 [19] [19] [19] ;
int arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3352822297U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = -865879736;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
