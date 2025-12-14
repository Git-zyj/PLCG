#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)18629;
long long int var_3 = 2857600329716114673LL;
unsigned short var_4 = (unsigned short)53804;
unsigned short var_5 = (unsigned short)53507;
unsigned char var_6 = (unsigned char)88;
signed char var_7 = (signed char)-47;
short var_8 = (short)26881;
long long int var_13 = 6328908429409006709LL;
int zero = 0;
signed char var_14 = (signed char)-1;
unsigned short var_15 = (unsigned short)2469;
unsigned short var_16 = (unsigned short)43997;
unsigned long long int var_17 = 14716406758261478371ULL;
unsigned int var_18 = 1882276336U;
signed char arr_2 [12] [12] ;
signed char arr_4 [12] ;
long long int arr_5 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = -5858860662940721242LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
