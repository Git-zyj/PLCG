#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9713;
unsigned char var_1 = (unsigned char)249;
long long int var_2 = -5738386681958510084LL;
unsigned char var_4 = (unsigned char)164;
signed char var_6 = (signed char)-10;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-1099;
unsigned short var_10 = (unsigned short)51146;
unsigned short var_12 = (unsigned short)22043;
unsigned char var_14 = (unsigned char)213;
unsigned long long int var_18 = 10955544893495652416ULL;
unsigned long long int var_19 = 4617322946352523317ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)225;
signed char var_22 = (signed char)26;
int var_23 = 95976436;
_Bool var_24 = (_Bool)1;
unsigned char arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)4;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
