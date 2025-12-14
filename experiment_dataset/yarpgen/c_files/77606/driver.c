#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)25425;
unsigned int var_3 = 758923153U;
unsigned short var_6 = (unsigned short)61584;
long long int var_9 = 8744404401693084679LL;
unsigned int var_16 = 2274799236U;
unsigned char var_17 = (unsigned char)203;
int zero = 0;
unsigned long long int var_20 = 15475845371231841835ULL;
unsigned int var_21 = 773038390U;
void init() {
}

void checksum() {
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
