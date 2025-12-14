#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58175;
int var_1 = -1649379272;
signed char var_3 = (signed char)-66;
short var_4 = (short)17915;
signed char var_5 = (signed char)60;
int var_7 = 1537125775;
short var_8 = (short)7490;
short var_9 = (short)-14586;
signed char var_10 = (signed char)5;
int var_13 = -587689091;
signed char var_16 = (signed char)4;
int zero = 0;
unsigned long long int var_18 = 13342405511022771045ULL;
unsigned long long int var_19 = 549986858533667103ULL;
long long int var_20 = 1002584171777787855LL;
signed char var_21 = (signed char)8;
signed char arr_1 [11] ;
int arr_2 [11] [11] ;
signed char arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = -1802619283;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)110;
}

void checksum() {
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
