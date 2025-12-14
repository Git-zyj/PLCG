#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1098101898;
int var_1 = 539437838;
unsigned short var_2 = (unsigned short)57205;
unsigned short var_4 = (unsigned short)46352;
int var_5 = -1664193407;
unsigned short var_6 = (unsigned short)33696;
unsigned int var_8 = 1039880766U;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 3805072946U;
short var_11 = (short)3630;
int zero = 0;
unsigned long long int var_12 = 6583242296685198885ULL;
long long int var_13 = -1608842993719741003LL;
short var_14 = (short)11522;
unsigned int var_15 = 2273291305U;
_Bool var_16 = (_Bool)0;
int var_17 = 2049312513;
unsigned int var_18 = 33050573U;
unsigned long long int arr_11 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = 16917433449301162474ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
