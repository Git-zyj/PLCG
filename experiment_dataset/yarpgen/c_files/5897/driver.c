#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)9881;
short var_6 = (short)2530;
short var_8 = (short)-16377;
signed char var_9 = (signed char)-44;
long long int var_11 = 4354363821788909375LL;
int zero = 0;
long long int var_17 = 435040207860627237LL;
short var_18 = (short)-24325;
short var_19 = (short)-22295;
void init() {
}

void checksum() {
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
