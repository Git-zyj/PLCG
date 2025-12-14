#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27858;
unsigned short var_11 = (unsigned short)33370;
unsigned char var_12 = (unsigned char)243;
int zero = 0;
unsigned char var_17 = (unsigned char)225;
unsigned long long int var_18 = 12090470932632169667ULL;
long long int var_19 = -131597307467643578LL;
void init() {
}

void checksum() {
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
