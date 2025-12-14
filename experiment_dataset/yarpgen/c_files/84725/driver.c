#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20800;
unsigned short var_1 = (unsigned short)13973;
int var_2 = 331080923;
unsigned short var_3 = (unsigned short)53597;
long long int var_7 = -3413350446440966675LL;
signed char var_13 = (signed char)-118;
unsigned short var_14 = (unsigned short)40834;
int zero = 0;
signed char var_16 = (signed char)-34;
unsigned short var_17 = (unsigned short)26860;
unsigned int var_18 = 2903506840U;
unsigned char var_19 = (unsigned char)67;
void init() {
}

void checksum() {
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
