#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 440172711U;
short var_2 = (short)-19394;
unsigned int var_4 = 15946463U;
unsigned int var_7 = 263495913U;
short var_9 = (short)17250;
unsigned short var_12 = (unsigned short)22954;
unsigned long long int var_13 = 17421484581436524522ULL;
unsigned long long int var_15 = 16001393226238878566ULL;
int zero = 0;
unsigned int var_17 = 1574201268U;
int var_18 = 609279359;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
