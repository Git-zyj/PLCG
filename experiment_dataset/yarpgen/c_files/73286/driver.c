#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6117;
short var_1 = (short)-32207;
unsigned long long int var_3 = 5709816222527547989ULL;
long long int var_4 = -809850862415883759LL;
int var_5 = -834909067;
unsigned int var_9 = 2886946488U;
int zero = 0;
int var_15 = 2022185963;
unsigned int var_16 = 910000255U;
unsigned char var_17 = (unsigned char)187;
short var_18 = (short)17495;
short var_19 = (short)2103;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
