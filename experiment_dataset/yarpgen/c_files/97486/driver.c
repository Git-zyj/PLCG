#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5165;
unsigned long long int var_1 = 8425833182045221708ULL;
unsigned short var_3 = (unsigned short)40785;
long long int var_4 = -736537968369216136LL;
unsigned short var_5 = (unsigned short)63865;
short var_7 = (short)-19536;
unsigned short var_9 = (unsigned short)35553;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = -1921343067;
int var_16 = 2034709350;
unsigned char var_17 = (unsigned char)140;
unsigned short var_18 = (unsigned short)34850;
short var_19 = (short)4055;
short var_20 = (short)10710;
_Bool arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
