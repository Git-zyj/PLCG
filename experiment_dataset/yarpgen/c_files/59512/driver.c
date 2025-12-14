#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22057;
unsigned char var_2 = (unsigned char)135;
short var_5 = (short)-7162;
unsigned char var_6 = (unsigned char)79;
unsigned char var_8 = (unsigned char)121;
unsigned char var_9 = (unsigned char)44;
unsigned int var_10 = 1680224355U;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 385977910U;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
