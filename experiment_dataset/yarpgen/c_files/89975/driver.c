#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7354097720436314958ULL;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)239;
unsigned long long int var_9 = 2321684841113165960ULL;
unsigned long long int var_10 = 3018600216264299988ULL;
signed char var_11 = (signed char)-92;
int zero = 0;
short var_14 = (short)-22698;
signed char var_15 = (signed char)50;
unsigned long long int var_16 = 11720920783705307247ULL;
int var_17 = -1679417074;
unsigned char var_18 = (unsigned char)89;
unsigned int arr_0 [13] ;
int arr_1 [13] [13] ;
signed char arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 2449525002U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = -854697052;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-34;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
