#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3160888292296820793LL;
unsigned short var_1 = (unsigned short)14388;
_Bool var_3 = (_Bool)0;
short var_4 = (short)14164;
unsigned short var_8 = (unsigned short)64176;
unsigned char var_9 = (unsigned char)247;
unsigned char var_11 = (unsigned char)188;
long long int var_13 = 4617533431879238516LL;
unsigned short var_14 = (unsigned short)17859;
int zero = 0;
unsigned int var_15 = 2095724173U;
unsigned long long int var_16 = 10334417936195308364ULL;
_Bool var_17 = (_Bool)1;
long long int var_18 = 2196147032492200338LL;
void init() {
}

void checksum() {
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
