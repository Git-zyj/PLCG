#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)318;
unsigned long long int var_2 = 6715283163326875759ULL;
long long int var_6 = 6949787202745971551LL;
unsigned char var_11 = (unsigned char)101;
_Bool var_13 = (_Bool)0;
long long int var_14 = 7335251348922132405LL;
int zero = 0;
unsigned short var_15 = (unsigned short)19963;
unsigned short var_16 = (unsigned short)56190;
unsigned char var_17 = (unsigned char)68;
unsigned short var_18 = (unsigned short)6729;
long long int arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 1674335731034518181LL;
}

void checksum() {
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
