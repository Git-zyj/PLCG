#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14156;
long long int var_1 = -8116014401607042247LL;
unsigned long long int var_2 = 16712404926475898254ULL;
short var_5 = (short)-18345;
unsigned short var_9 = (unsigned short)31961;
unsigned char var_10 = (unsigned char)188;
unsigned long long int var_12 = 2040992238659994472ULL;
unsigned long long int var_15 = 16275504790871014299ULL;
int zero = 0;
int var_17 = -1193424652;
short var_18 = (short)4356;
long long int var_19 = -3007009665930818161LL;
int var_20 = 1456957505;
void init() {
}

void checksum() {
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
