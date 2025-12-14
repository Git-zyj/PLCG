#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)46040;
unsigned char var_12 = (unsigned char)201;
unsigned short var_13 = (unsigned short)33323;
_Bool var_14 = (_Bool)1;
long long int var_17 = 2929433072597326498LL;
long long int var_18 = -1190344715493474767LL;
int zero = 0;
unsigned char var_20 = (unsigned char)17;
unsigned char var_21 = (unsigned char)2;
int var_22 = -571402375;
long long int var_23 = 6458902506962208767LL;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)-62;
long long int arr_0 [25] ;
int arr_6 [25] [25] [25] [25] ;
long long int arr_7 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 2286949299518419916LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 452298085 : -1202345988;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? -5512528199610687313LL : 2302222554942590563LL;
}

void checksum() {
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
