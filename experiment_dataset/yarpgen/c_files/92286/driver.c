#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7225135009351206048ULL;
short var_4 = (short)1407;
unsigned long long int var_5 = 9742369018780054518ULL;
short var_6 = (short)-22369;
short var_7 = (short)-17716;
unsigned long long int var_8 = 728394497379725671ULL;
short var_9 = (short)24174;
short var_11 = (short)-17630;
int zero = 0;
short var_12 = (short)-7981;
unsigned long long int var_13 = 8129135748826484335ULL;
unsigned long long int var_14 = 6030789014163109755ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
