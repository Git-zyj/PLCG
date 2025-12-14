#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13729720860112293073ULL;
unsigned char var_1 = (unsigned char)149;
unsigned long long int var_3 = 7048573206705911401ULL;
signed char var_4 = (signed char)108;
unsigned long long int var_7 = 16050007596640770949ULL;
int var_8 = 863635738;
signed char var_11 = (signed char)-30;
unsigned long long int var_12 = 12461129908012582223ULL;
int zero = 0;
int var_13 = -110283792;
unsigned char var_14 = (unsigned char)75;
unsigned long long int var_15 = 12238490452188170041ULL;
signed char var_16 = (signed char)43;
unsigned char var_17 = (unsigned char)146;
unsigned char var_18 = (unsigned char)208;
signed char var_19 = (signed char)54;
unsigned char var_20 = (unsigned char)109;
unsigned long long int arr_0 [10] ;
unsigned long long int arr_5 [10] [10] [10] [10] ;
unsigned long long int arr_7 [10] [10] [10] [10] ;
signed char arr_10 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 9105148486836048066ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 486578587184361703ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 14544371762887784924ULL : 17900961278577986665ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (signed char)67;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
