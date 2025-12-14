#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)11998;
long long int var_3 = 2278817703753387976LL;
unsigned long long int var_4 = 8631309914009881068ULL;
unsigned char var_6 = (unsigned char)94;
long long int var_7 = 616308950728901230LL;
int var_8 = 1452243980;
short var_9 = (short)10608;
long long int var_12 = -5526422151454891106LL;
unsigned char var_14 = (unsigned char)192;
int zero = 0;
signed char var_15 = (signed char)46;
unsigned short var_16 = (unsigned short)63938;
unsigned char var_17 = (unsigned char)10;
unsigned int var_18 = 1110483671U;
int var_19 = -1981634749;
unsigned int var_20 = 3952619680U;
unsigned int arr_5 [22] [22] [22] [22] ;
short arr_14 [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 542352204U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (short)-23454 : (short)11656;
}

void checksum() {
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
