#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5802136863847497065ULL;
unsigned long long int var_1 = 7941974377731933373ULL;
unsigned long long int var_4 = 9980997002167229275ULL;
unsigned int var_10 = 2291639481U;
unsigned int var_11 = 1156895099U;
unsigned short var_14 = (unsigned short)3628;
unsigned long long int var_18 = 5380125430312471197ULL;
unsigned long long int var_19 = 5342119706233712240ULL;
int zero = 0;
unsigned long long int var_20 = 7304450543024375002ULL;
unsigned long long int var_21 = 9327657175139809770ULL;
int var_22 = 560375988;
unsigned long long int var_23 = 6317765839971022972ULL;
unsigned long long int arr_0 [21] ;
unsigned long long int arr_1 [21] [21] ;
unsigned long long int arr_2 [21] ;
int arr_4 [22] [22] ;
unsigned int arr_6 [22] ;
unsigned short arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 945880796684005458ULL : 13664226784236676625ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 212900367225467675ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 1070091051754760671ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 1058964366;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 4220656059U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (unsigned short)53505;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
