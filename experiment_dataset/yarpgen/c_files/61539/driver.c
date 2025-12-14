#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)91;
unsigned short var_4 = (unsigned short)686;
int var_9 = 55734303;
unsigned long long int var_15 = 13946319284293081873ULL;
signed char var_17 = (signed char)-73;
int var_19 = -1698516993;
int zero = 0;
unsigned short var_20 = (unsigned short)40276;
long long int var_21 = -546677516291710402LL;
unsigned long long int var_22 = 13330647589123036791ULL;
unsigned long long int var_23 = 17995497063606311880ULL;
unsigned long long int var_24 = 13015608669261851970ULL;
short arr_5 [17] [17] ;
signed char arr_7 [22] [22] ;
unsigned long long int arr_9 [22] ;
short arr_11 [22] ;
int arr_6 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-21963;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-63;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 4566145711016144796ULL : 15038383758049896416ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (short)18987;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1911782738 : 1827988228;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
