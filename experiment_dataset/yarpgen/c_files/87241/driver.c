#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2669669272016858471LL;
signed char var_3 = (signed char)-93;
unsigned short var_4 = (unsigned short)17057;
short var_6 = (short)28201;
signed char var_8 = (signed char)-70;
unsigned char var_10 = (unsigned char)99;
unsigned char var_11 = (unsigned char)207;
short var_14 = (short)26040;
unsigned char var_15 = (unsigned char)18;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = 136085944;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)63108;
short var_21 = (short)27382;
void init() {
}

void checksum() {
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
