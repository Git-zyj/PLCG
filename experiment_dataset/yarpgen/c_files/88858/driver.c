#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-12942;
short var_3 = (short)11927;
short var_4 = (short)-30985;
short var_5 = (short)-26153;
short var_8 = (short)-1229;
short var_9 = (short)-17840;
short var_13 = (short)11668;
int zero = 0;
short var_14 = (short)-19203;
short var_15 = (short)7105;
short var_16 = (short)-5495;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
