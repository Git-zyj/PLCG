#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1706504291;
unsigned int var_3 = 2215239379U;
unsigned short var_5 = (unsigned short)27083;
int var_7 = 692554842;
unsigned char var_9 = (unsigned char)79;
int zero = 0;
int var_10 = -534068986;
unsigned long long int var_11 = 2020335116298917791ULL;
short var_12 = (short)9167;
int var_13 = 687048846;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
