#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22591;
unsigned int var_3 = 2520095748U;
int var_5 = 331725830;
unsigned char var_6 = (unsigned char)10;
int var_8 = -273963623;
unsigned short var_9 = (unsigned short)64900;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_15 = -109597602;
unsigned char var_16 = (unsigned char)191;
unsigned long long int var_17 = 7808893937626446353ULL;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)27064;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
