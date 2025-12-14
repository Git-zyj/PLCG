#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 292951041U;
int var_2 = -366743914;
long long int var_4 = -7565193246269896143LL;
unsigned char var_5 = (unsigned char)184;
signed char var_7 = (signed char)72;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
long long int var_11 = -4452790168555401361LL;
int zero = 0;
long long int var_12 = 3493548477640379763LL;
signed char var_13 = (signed char)-63;
signed char var_14 = (signed char)-44;
unsigned int var_15 = 2689910887U;
unsigned short var_16 = (unsigned short)27628;
signed char var_17 = (signed char)68;
unsigned long long int var_18 = 2232019300470799233ULL;
long long int arr_0 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = -5863926986839725135LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
