#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 4248232406657691012LL;
long long int var_9 = -461393835272046140LL;
short var_13 = (short)-6162;
short var_15 = (short)-1253;
unsigned int var_16 = 3867901053U;
int zero = 0;
int var_17 = -1652524472;
int var_18 = 1959574326;
unsigned short var_19 = (unsigned short)29109;
unsigned long long int var_20 = 7079742507233257619ULL;
unsigned char var_21 = (unsigned char)21;
unsigned long long int var_22 = 13762455072261770473ULL;
int var_23 = -1806100066;
short var_24 = (short)-22776;
int arr_4 [22] [22] ;
unsigned int arr_6 [22] [22] [22] ;
short arr_9 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = -1695517323;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1052508186U : 2209980470U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (short)-13684;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
