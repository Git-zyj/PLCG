#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 7499397133497066070ULL;
int var_6 = -1196415559;
long long int var_9 = 1922737193407857866LL;
unsigned char var_10 = (unsigned char)32;
signed char var_11 = (signed char)58;
long long int var_14 = 8277602538429574144LL;
int zero = 0;
unsigned short var_17 = (unsigned short)31870;
unsigned int var_18 = 2630718272U;
long long int var_19 = 7150069598539317494LL;
unsigned long long int var_20 = 8142724249435945323ULL;
unsigned int var_21 = 2686273481U;
unsigned short arr_0 [22] ;
signed char arr_2 [22] ;
unsigned short arr_4 [22] [22] [22] ;
unsigned long long int arr_5 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)3584 : (unsigned short)753;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-29 : (signed char)-124;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)5200;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 11020535953000431452ULL;
}

void checksum() {
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
