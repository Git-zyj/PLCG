#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6557;
short var_2 = (short)28591;
int var_5 = 326069343;
short var_7 = (short)-19224;
int var_8 = -1203944232;
short var_9 = (short)29882;
int zero = 0;
short var_11 = (short)19313;
int var_12 = 610467127;
short var_13 = (short)-4643;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
