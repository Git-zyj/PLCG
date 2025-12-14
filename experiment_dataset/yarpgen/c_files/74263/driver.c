#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2095313757;
short var_4 = (short)-22455;
int var_5 = -1373240363;
unsigned long long int var_7 = 810680690870402575ULL;
signed char var_8 = (signed char)-62;
int var_9 = -1712004671;
int zero = 0;
unsigned long long int var_13 = 18044161198551447741ULL;
short var_14 = (short)-29011;
int var_15 = 1989298875;
unsigned char var_16 = (unsigned char)36;
unsigned long long int var_17 = 204207634471773160ULL;
unsigned short var_18 = (unsigned short)35004;
unsigned int var_19 = 812229518U;
signed char var_20 = (signed char)-45;
unsigned int arr_0 [23] ;
unsigned short arr_2 [23] [23] ;
short arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 840050333U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)921;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (short)-19483;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
