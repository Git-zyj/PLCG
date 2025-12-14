#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)191;
unsigned int var_4 = 235502315U;
short var_6 = (short)-22503;
unsigned int var_7 = 3726741634U;
short var_8 = (short)-24139;
unsigned char var_9 = (unsigned char)68;
int zero = 0;
unsigned int var_10 = 199264266U;
short var_11 = (short)21766;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
