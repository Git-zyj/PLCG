#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1344789205;
unsigned short var_2 = (unsigned short)22212;
unsigned char var_3 = (unsigned char)143;
unsigned short var_7 = (unsigned short)36309;
unsigned short var_8 = (unsigned short)44073;
unsigned char var_9 = (unsigned char)228;
unsigned short var_10 = (unsigned short)29444;
short var_11 = (short)29608;
int zero = 0;
long long int var_15 = 1890938899103624408LL;
unsigned long long int var_16 = 9073792432194100580ULL;
_Bool var_17 = (_Bool)0;
long long int arr_0 [20] ;
_Bool arr_1 [20] ;
signed char arr_4 [20] [20] [20] ;
unsigned long long int arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 4121086686209109640LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-90 : (signed char)26;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 5016322498564331198ULL : 8369712288937812507ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
