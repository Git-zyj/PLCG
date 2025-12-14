#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38955;
int var_1 = -452527294;
unsigned short var_2 = (unsigned short)24420;
short var_8 = (short)3944;
short var_10 = (short)28929;
unsigned int var_12 = 2442704812U;
unsigned int var_15 = 835965739U;
int zero = 0;
unsigned long long int var_16 = 18006259663780254491ULL;
unsigned long long int var_17 = 15833755091827074394ULL;
signed char var_18 = (signed char)-67;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 4078184066U;
void init() {
}

void checksum() {
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
