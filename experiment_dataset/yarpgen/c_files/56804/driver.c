#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5995894221716949800LL;
short var_4 = (short)25621;
int var_5 = 779100096;
signed char var_6 = (signed char)95;
_Bool var_9 = (_Bool)1;
int var_10 = -833987029;
unsigned int var_11 = 1136677956U;
unsigned short var_12 = (unsigned short)44651;
int var_13 = 1872411502;
long long int var_15 = -6648750416846336471LL;
int zero = 0;
signed char var_16 = (signed char)-75;
int var_17 = -1220232377;
unsigned int var_18 = 1676473414U;
unsigned int var_19 = 2890459857U;
short var_20 = (short)-12912;
long long int var_21 = 187795903033116848LL;
_Bool arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
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
