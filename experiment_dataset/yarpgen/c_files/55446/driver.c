#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17907339560174891802ULL;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)40;
int var_7 = -236829976;
unsigned int var_9 = 3628437344U;
long long int var_10 = 8027735710459869317LL;
int zero = 0;
unsigned int var_15 = 1624570012U;
int var_16 = 186037979;
_Bool var_17 = (_Bool)1;
int var_18 = -1703820130;
long long int var_19 = -5827807930703931908LL;
unsigned long long int var_20 = 6013059572781554669ULL;
unsigned int var_21 = 883898325U;
int arr_0 [22] [22] ;
unsigned char arr_1 [22] [22] ;
unsigned char arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = -1455843575;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned char)68;
}

void checksum() {
    hash(&seed, var_15);
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
