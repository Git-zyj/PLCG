#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-21400;
short var_5 = (short)12465;
unsigned int var_7 = 1240951506U;
_Bool var_9 = (_Bool)1;
int var_10 = 1219678243;
int var_11 = 397070493;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)19447;
_Bool var_16 = (_Bool)1;
long long int var_18 = -4684119241265213234LL;
int zero = 0;
unsigned long long int var_19 = 1856053015499788700ULL;
unsigned long long int var_20 = 2738592448662569953ULL;
signed char var_21 = (signed char)-111;
unsigned int var_22 = 4097079515U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
