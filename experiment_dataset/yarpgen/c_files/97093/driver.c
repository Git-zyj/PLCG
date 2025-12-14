#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 114488082813401949LL;
unsigned long long int var_6 = 5354275983971256990ULL;
unsigned long long int var_7 = 16592170962381779671ULL;
unsigned short var_9 = (unsigned short)60821;
int var_12 = -1116143988;
int zero = 0;
int var_16 = 509829730;
unsigned long long int var_17 = 3663354303844765022ULL;
unsigned long long int var_18 = 6213507845684240054ULL;
short var_19 = (short)327;
short var_20 = (short)5112;
signed char var_21 = (signed char)94;
unsigned short arr_0 [17] ;
short arr_1 [17] [17] ;
unsigned long long int arr_3 [20] ;
unsigned long long int arr_2 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)25059;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-22200;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 11949441192650689604ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 1671125444324699291ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
