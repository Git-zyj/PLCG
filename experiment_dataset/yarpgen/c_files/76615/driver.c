#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5085;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)1;
long long int var_7 = -9031222050606660361LL;
unsigned long long int var_8 = 17198473601682192231ULL;
unsigned long long int var_10 = 2548528021041675321ULL;
unsigned short var_11 = (unsigned short)20970;
unsigned short var_13 = (unsigned short)38860;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)11;
short var_16 = (short)-4014;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)63;
unsigned short var_19 = (unsigned short)53231;
unsigned short var_20 = (unsigned short)25232;
unsigned long long int arr_1 [20] [20] ;
signed char arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 99208755896721281ULL : 13252100679748677037ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)31 : (signed char)102;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
