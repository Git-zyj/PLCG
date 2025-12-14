#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11164;
short var_2 = (short)-14656;
short var_6 = (short)7591;
short var_7 = (short)-17100;
short var_8 = (short)-23775;
short var_9 = (short)22537;
int zero = 0;
short var_13 = (short)11443;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
