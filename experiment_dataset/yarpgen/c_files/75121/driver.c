#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -193820517964532127LL;
int var_3 = -529194660;
unsigned short var_4 = (unsigned short)10097;
short var_5 = (short)-27468;
signed char var_6 = (signed char)67;
short var_7 = (short)13949;
long long int var_9 = 697584183500130378LL;
int var_10 = 96950016;
_Bool var_11 = (_Bool)1;
long long int var_13 = 977433915995674713LL;
int zero = 0;
long long int var_16 = 6971096922511756776LL;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
int var_19 = -1403362185;
unsigned short var_20 = (unsigned short)34227;
signed char var_21 = (signed char)77;
unsigned short var_22 = (unsigned short)39512;
signed char var_23 = (signed char)1;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)-43;
int arr_20 [25] [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 668969222 : -1540445505;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
