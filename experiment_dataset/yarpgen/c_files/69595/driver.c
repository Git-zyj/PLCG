#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)17655;
long long int var_5 = -1009180427636715256LL;
unsigned int var_9 = 3157735188U;
unsigned short var_10 = (unsigned short)46728;
signed char var_12 = (signed char)127;
signed char var_16 = (signed char)-63;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)63705;
int var_19 = 109387494;
unsigned short var_20 = (unsigned short)56207;
int var_21 = -53190051;
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
