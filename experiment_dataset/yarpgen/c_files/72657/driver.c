#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)53;
unsigned long long int var_2 = 4892868217061956370ULL;
signed char var_4 = (signed char)-40;
signed char var_5 = (signed char)-68;
long long int var_6 = -6207997102811331340LL;
short var_10 = (short)-21554;
int zero = 0;
signed char var_14 = (signed char)109;
unsigned long long int var_15 = 6001789758686476352ULL;
unsigned char var_16 = (unsigned char)34;
unsigned long long int var_17 = 12160139615368880065ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
