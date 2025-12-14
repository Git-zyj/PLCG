#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-105;
signed char var_2 = (signed char)-60;
short var_3 = (short)-25666;
long long int var_4 = -4646026544765753457LL;
long long int var_5 = -7560597484167803381LL;
unsigned long long int var_6 = 1784494066121211371ULL;
signed char var_7 = (signed char)98;
signed char var_8 = (signed char)-11;
long long int var_10 = -8616282040914991481LL;
unsigned long long int var_11 = 5652516815462431350ULL;
int zero = 0;
unsigned int var_12 = 2015771588U;
unsigned long long int var_13 = 14723364710253183754ULL;
short var_14 = (short)1510;
unsigned long long int var_15 = 11519562116277893715ULL;
unsigned long long int var_16 = 6918001221931024780ULL;
unsigned long long int arr_6 [17] [17] [17] [17] ;
unsigned short arr_7 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 3119678417505265695ULL : 249822411762623766ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)41482 : (unsigned short)11962;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
