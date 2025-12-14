#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1585206246U;
int var_2 = 1051481494;
unsigned long long int var_3 = 11816315752565636690ULL;
unsigned int var_4 = 3287073547U;
int var_5 = -413526989;
int var_11 = -1902576586;
short var_17 = (short)12075;
unsigned short var_18 = (unsigned short)46639;
int zero = 0;
unsigned int var_19 = 310458872U;
short var_20 = (short)17166;
long long int var_21 = 908726438377675080LL;
unsigned long long int var_22 = 8823986960591661487ULL;
unsigned long long int var_23 = 85474056111542994ULL;
short var_24 = (short)-9876;
unsigned long long int var_25 = 18259382938693363034ULL;
unsigned int arr_0 [22] ;
unsigned char arr_1 [22] ;
unsigned int arr_4 [22] ;
unsigned long long int arr_9 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 2958179647U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 260852474U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 16669253960125296842ULL : 90497135719990920ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
