#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)11437;
short var_4 = (short)-22921;
short var_5 = (short)-24235;
short var_6 = (short)10942;
short var_7 = (short)29899;
short var_8 = (short)-24816;
short var_11 = (short)3058;
short var_12 = (short)26044;
short var_13 = (short)-173;
short var_15 = (short)13150;
int zero = 0;
short var_17 = (short)22310;
short var_18 = (short)526;
short var_19 = (short)-31326;
short var_20 = (short)5204;
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
