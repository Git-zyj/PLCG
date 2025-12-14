#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-67;
unsigned long long int var_1 = 4835461053533994052ULL;
short var_2 = (short)-32145;
unsigned long long int var_4 = 11720449431820586767ULL;
int var_12 = -1740822276;
unsigned int var_13 = 572782845U;
int zero = 0;
long long int var_15 = 2788521019476339423LL;
unsigned char var_16 = (unsigned char)47;
unsigned long long int var_17 = 163693159561278031ULL;
short var_18 = (short)15279;
short var_19 = (short)-30609;
short var_20 = (short)-27422;
unsigned long long int arr_0 [22] ;
int arr_4 [22] [22] [22] ;
unsigned int arr_13 [22] [22] [22] [22] [22] [22] ;
short arr_14 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 8180822954536787545ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 800114135;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 2585337979U : 594468511U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (short)-3039;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
