#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13808;
unsigned short var_3 = (unsigned short)37918;
short var_4 = (short)-1468;
unsigned int var_5 = 732915064U;
signed char var_6 = (signed char)-48;
unsigned int var_7 = 3633816110U;
long long int var_8 = -7615452070403769253LL;
unsigned short var_9 = (unsigned short)1644;
unsigned long long int var_10 = 6751910355732925654ULL;
int zero = 0;
short var_11 = (short)9299;
short var_12 = (short)-25253;
unsigned long long int var_13 = 6074779141250464047ULL;
unsigned int var_14 = 779697787U;
unsigned long long int var_15 = 5169328377886282548ULL;
int var_16 = -1366677696;
long long int var_17 = -1906791728270792760LL;
_Bool arr_1 [13] [13] ;
short arr_5 [13] [13] ;
short arr_7 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-29650;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (short)-28681;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
