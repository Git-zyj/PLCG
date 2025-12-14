#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7772538837687641748LL;
short var_2 = (short)29616;
long long int var_3 = 3983552382996204570LL;
long long int var_7 = -6545480431857007118LL;
unsigned char var_8 = (unsigned char)32;
unsigned int var_11 = 4137484280U;
short var_14 = (short)-5629;
int zero = 0;
signed char var_15 = (signed char)-88;
unsigned short var_16 = (unsigned short)58522;
long long int var_17 = -4529362731473953837LL;
long long int var_18 = -5174111492644758505LL;
signed char var_19 = (signed char)-82;
unsigned short var_20 = (unsigned short)42400;
unsigned char arr_1 [20] ;
long long int arr_3 [20] [20] ;
unsigned char arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 5945456747180560027LL : -7113186460917047212LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)39 : (unsigned char)60;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
