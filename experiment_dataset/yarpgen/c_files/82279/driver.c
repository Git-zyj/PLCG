#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-101;
unsigned char var_3 = (unsigned char)20;
int var_4 = -1072844924;
unsigned short var_6 = (unsigned short)46636;
unsigned short var_8 = (unsigned short)28379;
unsigned long long int var_9 = 16355059547067180592ULL;
unsigned long long int var_17 = 310316693716849367ULL;
unsigned long long int var_18 = 4921853304909200658ULL;
int zero = 0;
unsigned int var_19 = 3198107856U;
short var_20 = (short)-32265;
unsigned int var_21 = 2992466107U;
void init() {
}

void checksum() {
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
