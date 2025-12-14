#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17855953999808929235ULL;
unsigned char var_2 = (unsigned char)224;
unsigned short var_4 = (unsigned short)56798;
unsigned char var_5 = (unsigned char)174;
signed char var_8 = (signed char)118;
long long int var_9 = 3613194063702843965LL;
short var_10 = (short)-21049;
signed char var_13 = (signed char)-42;
int zero = 0;
long long int var_15 = -4498751628184823080LL;
unsigned long long int var_16 = 9635530585709729055ULL;
short var_17 = (short)10316;
_Bool var_18 = (_Bool)1;
unsigned char arr_6 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)170 : (unsigned char)154;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
