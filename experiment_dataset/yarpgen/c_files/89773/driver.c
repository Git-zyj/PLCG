#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)14624;
unsigned long long int var_3 = 17598028831249713679ULL;
unsigned int var_4 = 1371215678U;
unsigned int var_5 = 2608053525U;
signed char var_7 = (signed char)102;
short var_8 = (short)-31376;
int var_11 = 1294336443;
int zero = 0;
unsigned int var_12 = 4231480772U;
unsigned long long int var_13 = 18395296435151283843ULL;
int var_14 = -1974583198;
short var_15 = (short)-16669;
long long int var_16 = -2330207503993976537LL;
signed char var_17 = (signed char)68;
short var_18 = (short)10014;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-22047;
unsigned int var_21 = 535230473U;
long long int var_22 = -5659942496914428687LL;
unsigned char var_23 = (unsigned char)170;
int var_24 = 547800225;
unsigned short var_25 = (unsigned short)64645;
unsigned short var_26 = (unsigned short)15914;
short arr_2 [23] [23] ;
unsigned int arr_3 [23] ;
int arr_7 [23] [23] [23] [23] ;
unsigned char arr_11 [23] [23] [23] [23] [23] [23] ;
long long int arr_13 [23] ;
long long int arr_16 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (short)30057;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 1998501987U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = -834920542;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = -8514387193026702309LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_16 [i_0] [i_1] = 5851113786936762486LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
