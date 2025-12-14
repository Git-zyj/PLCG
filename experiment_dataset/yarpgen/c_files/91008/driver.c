#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61470;
signed char var_2 = (signed char)127;
unsigned long long int var_6 = 17505075340017660581ULL;
unsigned int var_7 = 4163531036U;
signed char var_9 = (signed char)-7;
unsigned int var_10 = 2435478067U;
int zero = 0;
unsigned char var_14 = (unsigned char)160;
unsigned long long int var_15 = 7898561510154409083ULL;
unsigned int var_16 = 2853236133U;
unsigned long long int var_17 = 16061781685408844029ULL;
unsigned char var_18 = (unsigned char)17;
unsigned long long int var_19 = 16496199564805845057ULL;
signed char var_20 = (signed char)-97;
unsigned short var_21 = (unsigned short)40994;
signed char var_22 = (signed char)-101;
signed char var_23 = (signed char)-69;
unsigned short arr_0 [23] ;
signed char arr_1 [23] [23] ;
long long int arr_3 [23] [23] ;
unsigned long long int arr_8 [23] ;
unsigned int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)34694;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = -7399639462387419755LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = 16210338211634959552ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 447090038U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
