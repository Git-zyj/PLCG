#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1302563073U;
unsigned char var_5 = (unsigned char)184;
signed char var_6 = (signed char)94;
unsigned long long int var_9 = 6287255532613692240ULL;
signed char var_10 = (signed char)-117;
int zero = 0;
int var_14 = 22247538;
short var_15 = (short)-1556;
unsigned short var_16 = (unsigned short)41856;
long long int var_17 = 6436685861624729808LL;
unsigned short var_18 = (unsigned short)44810;
long long int var_19 = 8329562712178331703LL;
unsigned short arr_0 [24] ;
unsigned short arr_1 [24] [24] ;
signed char arr_2 [24] ;
short arr_3 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)411;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)42729;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)11;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-25288;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
