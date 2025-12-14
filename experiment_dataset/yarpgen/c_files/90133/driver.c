#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9181;
unsigned int var_1 = 2372879748U;
signed char var_2 = (signed char)92;
unsigned char var_4 = (unsigned char)163;
long long int var_7 = 4215071544316504853LL;
unsigned short var_8 = (unsigned short)2452;
unsigned int var_9 = 152043252U;
int zero = 0;
unsigned char var_11 = (unsigned char)201;
short var_12 = (short)9132;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3956268117U;
signed char var_15 = (signed char)96;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 6052838819636022521ULL;
signed char var_18 = (signed char)75;
unsigned long long int arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 10949331577439580505ULL;
}

void checksum() {
    hash(&seed, var_11);
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
