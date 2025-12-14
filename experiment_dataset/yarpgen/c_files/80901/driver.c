#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 5831892766258742964LL;
int var_7 = 822813131;
unsigned char var_9 = (unsigned char)108;
unsigned long long int var_11 = 14137579462607155686ULL;
signed char var_12 = (signed char)-72;
short var_13 = (short)31104;
int var_14 = -696897163;
long long int var_15 = 1829966535725641341LL;
int zero = 0;
unsigned char var_16 = (unsigned char)124;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 17020247992004143524ULL;
_Bool var_19 = (_Bool)0;
long long int var_20 = -8283389713838113692LL;
unsigned short var_21 = (unsigned short)33521;
_Bool arr_0 [13] ;
unsigned long long int arr_3 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 13403104971725306225ULL : 5426711525346576367ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
