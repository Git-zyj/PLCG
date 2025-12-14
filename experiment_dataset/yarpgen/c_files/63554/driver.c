#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3454587040U;
unsigned long long int var_3 = 7474317758775980817ULL;
unsigned char var_4 = (unsigned char)232;
unsigned long long int var_5 = 4618612339043098819ULL;
unsigned short var_7 = (unsigned short)46314;
unsigned int var_9 = 4145087930U;
long long int var_10 = -4895746205119479157LL;
long long int var_11 = -4425150337533447975LL;
int zero = 0;
unsigned char var_12 = (unsigned char)45;
unsigned long long int var_13 = 17924404087086441513ULL;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 68486634U;
long long int var_16 = 7756462351189794033LL;
long long int var_17 = -9111216546422072730LL;
unsigned short var_18 = (unsigned short)9026;
unsigned short arr_0 [19] ;
unsigned char arr_7 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)14124 : (unsigned short)47456;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)245 : (unsigned char)186;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
