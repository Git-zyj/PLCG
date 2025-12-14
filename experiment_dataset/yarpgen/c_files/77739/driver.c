#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)21;
unsigned int var_3 = 2899288109U;
unsigned int var_4 = 1060883168U;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 779989951U;
short var_9 = (short)-18932;
unsigned short var_11 = (unsigned short)15016;
unsigned int var_13 = 3186965835U;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2685099948U;
_Bool var_16 = (_Bool)0;
long long int var_17 = 719602632871276559LL;
short var_18 = (short)17004;
long long int arr_2 [12] ;
unsigned int arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2036171703036240504LL : 4740062447840989305LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1130268583U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
