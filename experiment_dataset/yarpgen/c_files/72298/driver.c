#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24523;
unsigned int var_1 = 671244149U;
long long int var_2 = -4216579258751954949LL;
unsigned short var_4 = (unsigned short)48892;
unsigned short var_8 = (unsigned short)34222;
unsigned short var_9 = (unsigned short)49468;
short var_11 = (short)25360;
int zero = 0;
short var_18 = (short)25253;
unsigned short var_19 = (unsigned short)27727;
unsigned short var_20 = (unsigned short)34427;
long long int var_21 = -3671487010784575056LL;
long long int var_22 = -3884759457793057192LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
