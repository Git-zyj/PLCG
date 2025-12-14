#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -845774756530753110LL;
short var_1 = (short)-30968;
long long int var_3 = -3286174010740079802LL;
short var_5 = (short)-10490;
signed char var_9 = (signed char)-54;
signed char var_11 = (signed char)106;
int var_12 = 532904442;
unsigned long long int var_13 = 3724607119041402998ULL;
unsigned int var_14 = 2913175078U;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)53;
short var_18 = (short)-17147;
long long int var_19 = -2852798998106456594LL;
unsigned long long int var_20 = 5605289832088758061ULL;
unsigned long long int var_21 = 10146428519337907122ULL;
unsigned short arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)6885 : (unsigned short)35299;
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
