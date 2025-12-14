#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 10503143525132329616ULL;
long long int var_8 = -721964482489436951LL;
unsigned char var_9 = (unsigned char)100;
unsigned short var_10 = (unsigned short)64857;
int zero = 0;
unsigned char var_13 = (unsigned char)38;
short var_14 = (short)25543;
short var_15 = (short)-12119;
unsigned short var_16 = (unsigned short)3349;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
