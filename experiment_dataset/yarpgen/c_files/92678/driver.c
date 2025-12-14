#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6125986056458777053ULL;
unsigned char var_1 = (unsigned char)214;
int var_5 = -1252315179;
unsigned short var_8 = (unsigned short)20251;
int var_9 = -1014846959;
short var_10 = (short)-21688;
unsigned long long int var_11 = 4872569814964785500ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)143;
unsigned int var_15 = 694144319U;
unsigned short var_16 = (unsigned short)19356;
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
