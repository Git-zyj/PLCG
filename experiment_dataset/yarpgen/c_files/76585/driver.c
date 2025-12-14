#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10947409322845681597ULL;
unsigned long long int var_2 = 11796233071557129878ULL;
unsigned long long int var_4 = 17946701689140610575ULL;
unsigned int var_7 = 3169058301U;
long long int var_8 = 6697770816404170304LL;
unsigned int var_11 = 3464367003U;
long long int var_13 = -8746440299369498173LL;
unsigned long long int var_14 = 3127485262231205955ULL;
int var_17 = -871906848;
int zero = 0;
short var_19 = (short)25156;
long long int var_20 = -228611150049903944LL;
unsigned int var_21 = 3771802668U;
unsigned long long int arr_6 [20] [20] ;
unsigned char arr_7 [20] ;
int arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 812367483127968482ULL : 6057524329802085001ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)20 : (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 638650084 : -389951789;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
