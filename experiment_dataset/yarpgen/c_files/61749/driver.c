#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1184319569;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 17801859193316772617ULL;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)60065;
unsigned long long int var_14 = 9921484340857441947ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)64913;
unsigned long long int var_16 = 2932039897287608146ULL;
int var_17 = -1128673153;
int var_18 = 848810954;
signed char arr_0 [25] ;
short arr_2 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (short)1458;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
