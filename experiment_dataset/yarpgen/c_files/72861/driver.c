#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)254;
long long int var_4 = -7160895109158269680LL;
short var_5 = (short)-26864;
long long int var_6 = -5381236210930170011LL;
short var_7 = (short)19272;
short var_8 = (short)-269;
short var_10 = (short)2760;
unsigned int var_12 = 598656196U;
short var_13 = (short)7290;
long long int var_14 = -706076080399958446LL;
int zero = 0;
unsigned char var_16 = (unsigned char)199;
long long int var_17 = 4721609771380646438LL;
short var_18 = (short)566;
long long int var_19 = -1057321981897030765LL;
long long int var_20 = 554832276478299349LL;
unsigned char var_21 = (unsigned char)109;
short var_22 = (short)27873;
unsigned char var_23 = (unsigned char)240;
short arr_0 [21] ;
short arr_2 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)29684;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-28490;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
