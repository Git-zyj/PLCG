#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13989852335892254049ULL;
int var_4 = -305078533;
unsigned long long int var_5 = 18215191916525620870ULL;
unsigned char var_6 = (unsigned char)172;
signed char var_9 = (signed char)-58;
unsigned int var_13 = 875976700U;
long long int var_14 = 6180617254582317793LL;
int zero = 0;
signed char var_16 = (signed char)-126;
short var_17 = (short)-15690;
unsigned long long int var_18 = 17956273361197440964ULL;
int var_19 = -1204067165;
int var_20 = -1489800973;
unsigned char var_21 = (unsigned char)74;
_Bool arr_0 [14] [14] ;
short arr_1 [14] [14] ;
long long int arr_3 [14] ;
unsigned int arr_4 [14] ;
unsigned char arr_7 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-16910;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 715377742943796715LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 2113808481U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)228;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
